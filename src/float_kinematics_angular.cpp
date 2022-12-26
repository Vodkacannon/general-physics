#define _USE_MATH_DEFINES
#include <cmath>

namespace general_physics
{
	float time(float frequency)
	{
		return 1.0f / frequency;
	}

	float frequency(float time)
	{
		return 1.0f / time;
	}
	
  	float centripedal_acceleration_from_tangental(float tangental_velocity, float radius)
	{
		return (tangental_velocity * tangental_velocity) / radius;
	}

	float centripedal_acceleration_from_angular(float angular_velocity, float radius)
	{
		return -angular_velocity * angular_velocity * radius;
	}

	float angular_velocity(float angle, float time)
	{
		return angle / time;
	}

	float angular_velocity(float angle_2, float angle_1, float time_2, float time_1)
	{
		return (angle_2 - angle_1) / (time_2 - time_1);
	}

	float angular_acceleration(float angular_velocity, float time)
	{
		return angular_velocity / time;
	}

	float angular_acceleration(float angular_velocity_2, float angular_velocity_1, float time_2, float time_1)
	{
		return (angular_velocity_2 - angular_velocity_1) / (time_2 - time_1);
	}

	float perpendicular_angular_momentum(float radius, float mass, float velocity, float perpendicular_angle)
	{
		return radius * mass * velocity * sinf(perpendicular_angle);
	}
	
	float orbital_period(float velocity, float radius)
	{
		return (2.0f * M_PI * radius) / velocity;
	}
	
	float harmonic_oscillator_position(float amplitude, float frequency, float time, float phase)
	{
		return amplitude * sinf(2.0f * M_PI * frequency * time + phase);
	}
	

};
