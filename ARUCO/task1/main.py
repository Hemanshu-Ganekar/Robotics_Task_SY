import cv2

dictionary = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_4X4_50)

detector = cv2.aruco.ArucoDetector(dictionary)

cap = cv2.VideoCapture(0)

if not cap.isOpened():
    print("Error: Cannot open the camera")
    exit()

try:
    while True:
        ret, frame = cap.read()

        corners, ids, rejected = detector.detectMarkers(frame)
        if ids is not None:
            print("Detected IDs:")
            print(ids)

            cv2.aruco.drawDetectedMarkers(
                frame,
                corners,
                ids
            )
        cv2.imshow('Camera Stream', frame)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
finally:
    cap.release()
    cv2.destroyAllWindows()