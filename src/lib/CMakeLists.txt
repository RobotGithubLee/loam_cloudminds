add_library(loam
            math_utils.h
            ScanRegistration.cpp
            MultiScanRegistration.cpp
            LaserOdometry.cpp
            LaserMapping.cpp
            LaserMapping_self.cpp
            TransformMaintenance.cpp)
target_link_libraries(loam ${catkin_LIBRARIES} ${PCL_LIBRARIES})
