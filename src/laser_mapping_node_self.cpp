#include <ros/ros.h>
#include "loam_velodyne/LaserMapping_self.h"


/** Main node entry point. */
int main(int argc, char **argv)
{
  ros::init(argc, argv, "laserMappingself");
  ros::NodeHandle node;
  ros::NodeHandle privateNode("~");

  loam::LaserMappingSelf laserMapping(0.1);

  if (laserMapping.setup(node, privateNode)) {
    // initialization successful
    laserMapping.spin();
  }

  return 0;
}
