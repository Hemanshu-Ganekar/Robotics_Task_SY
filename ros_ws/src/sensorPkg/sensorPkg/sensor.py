import rclpy
from rclpy.node import Node
from custom_msgs.msg import ExtendedVector3
import random
class sensorClass(Node):
    def __init__(self):
        super().__init__("sensor")
        self.sensor = self.create_publisher(ExtendedVector3,"IMU",10)
        self.timer = self.create_timer(2.0,self.timer_callback)

    def timer_callback(self):
        msg = ExtendedVector3()
        msg.vector.x = float(random.randint(1,10))
        msg.vector.y = float(random.randint(1,10))
        msg.vector.z = float(random.randint(1,10))
        msg.freq = 2
        self.sensor.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    sensorObj = sensorClass()
    rclpy.spin(sensorObj)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
    
