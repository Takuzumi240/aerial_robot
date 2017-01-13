#include <pluginlib/class_list_macros.h>
#include <aerial_robot_base/sensor/sensor_base_plugin.h>
#include <aerial_robot_base/sensor/imu.h>
#include <aerial_robot_base/sensor/optical_flow.h>
#include <aerial_robot_base/sensor/mocap.h>
#include <aerial_robot_base/sensor/range_sensor.h>
#include <aerial_robot_base/sensor/rtk_gps.h>
#include <aerial_robot_base/sensor/baro.h>


PLUGINLIB_EXPORT_CLASS(sensor_plugin::OpticalFlow, sensor_base_plugin::SensorBase);
PLUGINLIB_EXPORT_CLASS(sensor_plugin::Mocap, sensor_base_plugin::SensorBase);
PLUGINLIB_EXPORT_CLASS(sensor_plugin::RangeSensor, sensor_base_plugin::SensorBase);
PLUGINLIB_EXPORT_CLASS(sensor_plugin::RtkGps, sensor_base_plugin::SensorBase);
PLUGINLIB_EXPORT_CLASS(sensor_plugin::Barometer, sensor_base_plugin::SensorBase);
