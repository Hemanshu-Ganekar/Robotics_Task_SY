import rclpy
from rclpy.node import Node
from custom_msgs.msg import RobotStatus

class subscriber(Node):
    def __init__(self):
        super().__init__("SubscriberNode")
        self.subscriber = self.create_subscription(RobotStatus,"RobotData",self.sub_callback,10)
	
    def sub_callback(self,msg):
        self.get_logger().info(f"\n===============\nRobot Name : {msg.robot_name}\nbattery level:{msg.battery_level}\nmoving : {msg.is_moving}\nError code : {msg.error_code}")

def main(args=None):
    rclpy.init(args=args)
    subs = subscriber()
    rclpy.spin(subs)
    rclpy.shutdown()

if __name__ == "__main__":
    main()




