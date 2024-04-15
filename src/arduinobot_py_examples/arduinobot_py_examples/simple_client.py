import rclpy
from rclpy.node import Node
from arduinobot_msgs.srv import AddTwoFloats
import sys

class SimpleServerClient(Node):
    def __init__(self,a,b):
        super().__init__("simple_server_client")

        self.client_ = self.create_client(AddTwoFloats, "add_two_floats")

        while not self.client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Service not availabe, wait.....")

        self.req_ = AddTwoFloats.Request()
        self.req_.a = a
        self.req_.b = b
        self.future_ = self.client_.call_async(self.req_)
        self.future_.add_done_callback(self.responseCallback)

    def responseCallback(self, future):
        self.get_logger().info("Service Response %d" % future.result().sum)


def main():
    rclpy.init()

    if len(sys.argv) != 3:
        print("Wrong no. of arguments!")
        return -1
    
    simple_service_client = SimpleServerClient(float(sys.argv[1]),float(sys.argv[2]))
    rclpy.spin(simple_service_client)
    simple_service_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()