import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class publisher(Node):
    def __init__(self):
        self.i = 0
        super().__init__("publisher_mini")
        self.publisherNode = self.create_publisher(String,'ISIS',10)  
        self.timer = self.create_timer(1.0,self.timer_callback)

    def timer_callback(self):
         msg = String()
         msg.data = str(self.i)
         super().get_logger().info(f"message no {msg.data}")
         self.publisherNode.publish(msg)
         self.i=self.i+1

         
def main(args=None):
    rclpy.init(args=args)
    node = publisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
