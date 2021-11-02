#include <math.h>

namespace simple_physics
{
	float time(float frequency)
	{
		return 1 / frequency;
	}

	float frequency(float time)
	{
		return 1 / time;
	}
	
  	float centripedal_acceleration_from_tangental(float tangental_velocity, float radius)
	{
		return (tangental_velocity * tangental_velocity) / radius;
	}

	float centripedal_acceleration_from_angular(float angular_velocity, float radius)
	{
		return -angular_velocity * angular_velocity * radius;
	}

	float centripedal_force(float mass, float tangental_velocity, float radius)
	{
		return (mass * tangental_velocity * tangental_velocity) / radius;
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

	float torque(float radius, float force, float angle)
	{
		return radius * force * sinf(angle);
	}

	float torque(float inertia, float angular_acceleration)
	{
		return inertia * angular_acceleration;
	}  
	
	float orbital_period(float velocity, float radius)
	{
		return (2 * M_PI * radius) / velocity;
	}
	
	float angular_energy( float moment_of_inertia, float rotational_velocity)
	{
		return (1 / 2) * moment_of_inertia * rotational_velocity * rotational_velocity; 
	}
	
	float harmonic_oscillator_position(float amplitude, float frequency, float time, float phase)
	{
		return amplitude * sinf(2 * M_PI * frequency * time + phase);
	}
};
