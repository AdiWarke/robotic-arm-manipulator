import rclpy
from rclpy.node import Node
from arduinobot_msgs.srv import EulerToQuaternion, QuaternionToEuler
from tf_transformations import quaternion_from_euler, euler_from_quaternion 

class AnglesConverter(Node) :
    def __init__(self):
        super().__init__("angle_conversion_service")

        self.euler_to_quaternion_ = self.create_service(EulerToQuaternion, "euler_to_quarterion", self.EuToQuartCallback)
        self.quaternion_to_euler_ = self.create_service(QuaternionToEuler, "quarterion_to_euler", self.QuartToEuCallback)

        self.get_logger().info("Angle conversion ready")

    def EuToQuartCallback(self,req,res):
        self.get_logger().info("Requested to euler angles roll: %f, pitch: %f, yaw: %f, into quaternion." % (req.roll, req.pitch, req.yaw))
        (res.x, res.y, res.z, res.w) = quaternion_from_euler(req.roll, req.pitch, req.yaw)
        self.get_logger().info("Result for the EutoQuart x: %f, y: %f, z: %f, w: %f" % (res.x,res.y,res.z,res.w))
        return res

    def QuartToEuCallback(self,req,res):
        self.get_logger().info("Requested to quaternion x: %f, y: %f, z: %f, w: %f" % (req.x,req.y,req.z,req.w))
        (res.roll, res.pitch, res.yaw) = euler_from_quaternion([req.x,req.y,req.z,req.w])
        self.get_logger().info("Result for the QuartToEu roll: %f, pitch: %f, yaw: %f, into quaternion." % (res.roll, res.pitch, res.yaw))
        return res
def main():
    rclpy.init()
    angles_converter = AnglesConverter()
    rclpy.spin(angles_converter)
    angles_converter.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

