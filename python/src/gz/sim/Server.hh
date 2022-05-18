/*
 * Copyright (C) 2021 Open Source Robotics Foundation
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
 */


#ifndef GZ_GAZEBO_PYTHON__SERVER_HH_
#define GZ_GAZEBO_PYTHON__SERVER_HH_

#include <pybind11/pybind11.h>

namespace gz
{
namespace sim
{
namespace python
{
/// Define a pybind11 wrapper for an gz::sim::Server
/**
 * \param[in] module a pybind11 module to add the definition to
 */
void
defineGazeboServer(pybind11::object module);
}  // namespace python
}  // namespace sim
}  // namespace gz

#endif  // GZ_GAZEBO_PYTHON__SERVER_HH_
