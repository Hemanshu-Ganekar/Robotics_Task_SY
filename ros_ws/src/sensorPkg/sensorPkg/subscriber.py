import rclpy
from rclpy.node import Node
from custom_msgs.msg import ExtendedVector3
from std_msgs.msg import Float64
class subscriberClass(Node):
    def __init__(self):
        super().__init__("subscriberNode")
        self.subscriber = self.create_subscription(ExtendedVector3,"IMU",self.subscription_callback,10)
        self.publisher = self.create_publisher(Float64,"AVG",10)
    def subscription_callback(self,msg:ExtendedVector3):
        msgS = Float64()
        msgS.data = (float((msg.vector.x+msg.vector.y+msg.vector.z)/3))
        self.publisher.publish(msgS)
        
def main(args=None):
    rclpy.init(args=args)
    subs = subscriberClass()
    rclpy.spin(subs)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
        
        
