import cv2
import numpy as np
cap = cv2.VideoCapture(0)

choice = int(input("Choose Your Colour : \n\nPress 1. Blue\nPress 2. Green\nPress 3. Red\n\nYour choice : "))

while True : 
    ret,frame = cap.read()
    into_hsv = cv2.cvtColor(frame,cv2.COLOR_BGR2HSV)

    if choice==1 : 
        
        L_limit=np.array([98,50,50]) 
        U_limit=np.array([139,255,255]) 

        b_mask=cv2.inRange(into_hsv,L_limit,U_limit)

        contours, _ = cv2.findContours(
            b_mask,
            cv2.RETR_EXTERNAL,
            cv2.CHAIN_APPROX_SIMPLE
        )

    elif choice==2 : 
        L_limit=np.array([35, 50, 50]) 
        U_limit=np.array([85, 255, 255]) 

        g_mask=cv2.inRange(into_hsv,L_limit,U_limit)
    
        contours, _ = cv2.findContours(
            g_mask,
            cv2.RETR_EXTERNAL,
            cv2.CHAIN_APPROX_SIMPLE
        )
    elif choice==3 : 
        L_red1 = np.array([0, 50, 50])
        U_red1 = np.array([10, 255, 255])

        L_red2 = np.array([170, 50, 50])
        U_red2 = np.array([179, 255, 255])

        red_mask1 = cv2.inRange(into_hsv,L_red1,U_red1)
        red_mask2 = cv2.inRange(into_hsv,L_red2,U_red2)
        red_mask = red_mask1 | red_mask2

        contours, _ = cv2.findContours(
            red_mask,
            cv2.RETR_EXTERNAL,
            cv2.CHAIN_APPROX_SIMPLE
        )
    
    if contours : 
        largest_cont = max(contours,key=cv2.contourArea)

        x,y,w,h = cv2.boundingRect(largest_cont)

        cv2.rectangle(
        frame,
        (x, y),
        (x + w, y + h),
        (0, 255, 0),
        2
        )

    cv2.imshow('Original',frame) 

    if cv2.waitKey(1) & 0xFF == ord("q"):
        break

cap.release()
cv2.destroyAllWindows()