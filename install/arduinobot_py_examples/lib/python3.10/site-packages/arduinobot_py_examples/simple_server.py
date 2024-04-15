import rclpy
from rclpy.node import Node
from arduinobot_msgs.srv import AddTwoFloats

class ServiceServer(Node) :
    def __init__(self):
        super().__init__("service_server")

        self.service_ = self.create_service(AddTwoFloats, "add_two_floats", self.serviceCallback)
        self.get_logger().info("Service add_two_floats ready")

    def serviceCallback(self, req, res):
        self.get_logger().info("New msg received a:%f, b:%f" % (req.a, req.b))
        res.sum = req.a + req.b
        self.get_logger().info("Returning sum: %d" % res.sum)
        return res
    
def main():
    rclpy.init()
    simple_service_server = ServiceServer()
    rclpy.spin(simple_service_server)
    simple_service_server.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

