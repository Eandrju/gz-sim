/*
 * Copyright (C) 2019 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef GZ_SIM_COMPONENTS_RGBDCAMERA_HH_
#define GZ_SIM_COMPONENTS_RGBDCAMERA_HH_

#include <sdf/Sensor.hh>

#include <gz/sim/components/Factory.hh>
#include <gz/sim/components/Component.hh>
#include <gz/sim/components/Serialization.hh>
#include <gz/sim/config.hh>

namespace gz
{
namespace sim
{
// Inline bracket to help doxygen filtering.
inline namespace IGNITION_GAZEBO_VERSION_NAMESPACE {
namespace components
{
  /// \brief A component type that contains a RGBD camera sensor,
  /// sdf::Camera, information.
  using RgbdCamera = Component<sdf::Sensor, class RgbdCameraTag,
      serializers::SensorSerializer>;
  IGN_GAZEBO_REGISTER_COMPONENT("gz_sim_components.RgbdCamera", RgbdCamera)
}
}
}
}
#endif
