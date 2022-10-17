#include <cmath>

namespace general_physics
{
  double relativistic_velocity_clamp(double velocity)
  {
    if(velocity > SPEED_OF_LIGHT)
    {
      return SPEED_OF_LIGHT;
    }

    else if(velocity < -SPEED_OF_LIGHT)
    {
      return -SPEED_OF_LIGHT;
    }
    else
    {
      return velocity;
    }
  }

  double lorentz_factor(double velocity)
  {
    return 1.0f / sqrt(1 - (velocity * velocity) / (SPEED_OF_LIGHT * SPEED_OF_LIGHT));
  }

  double relativistic_time_dilation(double lorentz_factor, double proper_time)
  {
    return proper_time / lorentz_factor;
  }

  double relativistic_time_dilation_2(double velocity, double proper_time)
  {
    return proper_time / lorentz_factor(velocity);
  }

  double relativistic_time_dilation(double lorentz_factor, double proper_time_2, double proper_time_1)
  {
    return (proper_time_2 - proper_time_1) / lorentz_factor;
  }

  double relativistic_length_contraction(double lorentz_factor, double proper_length)
  {
    return (1.0f / lorentz_factor) * proper_length;
  }

  double relativistic_length_contraction_2(double velocity, double proper_length)
  {
    return lorentz_factor(velocity) * proper_length;
  }

  double relativistic_momentum(double lorentz_factor, double mass, double velocity)
  {
    return lorentz_factor * mass * velocity;
  }

  double relativistic_momentum(double velocity, double mass)
  {
    return lorentz_factor(velocity) * mass;
  }

  double mass_energy(double mass)
  {
    return mass * SPEED_OF_LIGHT * SPEED_OF_LIGHT;
  }

  double energy_momentum(double momentum, double rest_mass)
  {
    double momentum_part = (momentum * SPEED_OF_LIGHT) * (momentum * SPEED_OF_LIGHT);
    double mass_energy_part = mass_energy(rest_mass) * mass_energy(rest_mass);

    return sqrt(momentum_part + mass_energy_part);
  }
}
