import rclpy
from rclpy.node import Node
from custom_msgs.msg import ExtendedVector3
from std_msgs.msg import Float64

class subscriberClass(Node):
    def __init__(self):
        super().__init__("loggerNode")
        self.subscriber = self.create_subscription(Float64,"AVG",self.subscription_callback,10)
        
    def subscription_callback(self,msg:Float64):
        self.get_logger().info(f"Your average is : {msg.data}")

def main(args=None):
    rclpy.init(args=args)
    subs = subscriberClass()
    rclpy.spin(subs)
    rclpy.shutdown()

if __name__ == "__main__":
    main()








