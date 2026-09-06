import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose

class subscriber(Node):
    def __init__(self):
        super().__init__("pose_subscriber")
        self.pose_subscriber = self.create_subscription(Pose,"/turtle1/pose",self.pose_callback,10)

    def pose_callback(self,msg):
        self.get_logger().info(f"{str(msg.x)},{str(msg.y)}")

def main(args=None) :
    rclpy.init(args=args)
    poseSubscriber = subscriber()
    rclpy.spin(poseSubscriber)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
