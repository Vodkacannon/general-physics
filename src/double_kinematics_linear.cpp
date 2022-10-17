#include <cmath>

namespace general_physics
{
  double speed(double distance, double time)
  {
    return fabs(distance) / time;
  }

	double velocity(double displacement, double time)
  {
    return displacement / time;
  }

  double displacement(double velocity, double time)
  {
    return velocity / time;
  }

  double distance(double speed, double time)
  {
    return fabs(speed) / time;
  }

  double time(double distance, double velocity)
  {
    return distance / velocity;
  }

  double displacement_2(double velocity_1, double time, double acceleration)
  {
    return velocity_1 * time + (1 / 2) * acceleration * time * time;
  }

  double displacement_3(double velocity_1, double velocity_2, double acceleration)
  {
    return (velocity_2 * velocity_2 - velocity_1 * velocity_1) / (2 * acceleration);
  }

  double acceleration(double velocity_2, double velocity_1, double time_2, double time_1)
  {
    return (velocity_2 - velocity_1) / (time_2 - time_1);
  }
}
