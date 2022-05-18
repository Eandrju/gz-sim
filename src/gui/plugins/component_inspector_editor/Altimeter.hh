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
 *
*/
#ifndef GZ_GAZEBO_GUI_COMPONENTINSPECTOR_ALTIMETER_HH_
#define GZ_GAZEBO_GUI_COMPONENTINSPECTOR_ALTIMETER_HH_

#include <QObject>

namespace gz
{
namespace sim
{
  class ComponentInspectorEditor;

  /// \brief A class that handles altimeter changes.
  class Altimeter : public QObject
  {
    Q_OBJECT

    /// \brief Constructor
    /// \param[in] _inspector The component inspector.
    public: explicit Altimeter(ComponentInspectorEditor *_inspector);

    /// \brief This function is called when a user changes values in the
    /// altimeter sensor's position noise.
    /// \param[in] _mean Mean value
    /// \param[in] _meanBias Bias mean value
    /// \param[in] _stdDev Standard deviation value
    /// \param[in] _stdDevBias Bias standard deviation value
    /// \param[in] _dynamicBiasStdDev Dynamic bias standard deviation value
    /// \param[in] _dynamicBiasCorrelationTime Dynamic bias correlation time
    /// value
      public: Q_INVOKABLE void OnAltimeterPositionNoise(
                  double _mean, double _meanBias, double _stdDev,
                  double _stdDevBias, double _dynamicBiasStdDev,
                  double _dynamicBiasCorrelationTime);

    /// \brief This function is called when a user changes values in the
    /// altimeter sensor's velocity noise.
    /// \param[in] _mean Mean value
    /// \param[in] _meanBias Bias mean value
    /// \param[in] _stdDev Standard deviation value
    /// \param[in] _stdDevBias Bias standard deviation value
    /// \param[in] _dynamicBiasStdDev Dynamic bias standard deviation value
    /// \param[in] _dynamicBiasCorrelationTime Dynamic bias correlation time
    /// value
    public: Q_INVOKABLE void OnAltimeterVelocityNoise(
                double _mean, double _meanBias, double _stdDev,
                double _stdDevBias, double _dynamicBiasStdDev,
                double _dynamicBiasCorrelationTime);

    /// \brief Pointer to the component inspector. This is used to add
    /// update callbacks that modify the ECM.
    private: ComponentInspectorEditor *inspector{nullptr};
  };
}
}
#endif
