import rclpy
from rclpy.node import Node
from custom_msgs.msg import RobotStatus
import random
class publisher(Node):
    def __init__(self):
        super().__init__("PublisherNode")
        self.publisher = self.create_publisher(RobotStatus,"RobotData",10)
        self.timer = self.create_timer(2.0,self.timer_callback)
    error_code = [404,400,500,300,402]
    def timer_callback(self):
        msg = RobotStatus()
        msg.robot_name = "Amartya"
        msg.battery_level = float(random.randint(0,100))
        msg.is_moving = bool(random.randint(0,1))
        msg.error_code = self.error_code[random.randint(0,4)]
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    subs = publisher()
    rclpy.spin(subs)
    rclpy.shutdown()

if __name__ == "__main__":
    main()




