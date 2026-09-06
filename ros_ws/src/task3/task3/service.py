import rclpy
from rclpy.node import Node

from custom_msgs.srv import AddNumber


class AddServer(Node):

    def __init__(self):
        super().__init__("server")
        self.server = self.create_service(AddNumber,"/addNumber",self.callback)
        

    def callback(self, req, res):
        res.sum = req.a + req.b
        self.get_logger().info(f"{req.a} + {req.b} = {res.sum}")
        return res
        

def main(args=None):

    rclpy.init(args=args)

    node = AddServer()

    rclpy.spin(node)

    rclpy.shutdown()


if __name__ == "__main__":
    main()
