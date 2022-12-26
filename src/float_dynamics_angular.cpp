#pragma once
#define _USE_MATH_DEFINES
#include <cmath>

namespace general_physics
{
	float period_of_spring_with_mass(float mass, float spring_constant)
	{
		return 2.0f * M_PI * sqrtf(mass / spring_constant);
	}
	
	float pendulum_potential_energy(float mass, float gravitational_acceleration, float pendulum_length, float angle)
	{
		return mass * gravitational_acceleration * pendulum_length * (1.0f - cosf(angle));
	}
	
	float centripedal_force(float mass, float tangental_velocity, float radius)
	{
		return (mass * tangental_velocity * tangental_velocity) / radius;
	}
	
	float torque(float radius, float force, float angle)
	{
		return radius * force * sinf(angle);
	}

	float torque(float inertia, float angular_acceleration)
	{
		return inertia * angular_acceleration;
	}

	float rotational_kinetic_energy(float rotational_inertia, float angular_velocity)
	{
		return 0.5f * rotational_inertia * angular_velocity * angular_velocity;
	}

	float rolling_object_kinetic_energy(float kinetic_energy, float rotational_kinetic_energy)
	{
		return kinetic_energy + rotational_kinetic_energy;
	}

	//Calculate the rotational inertia of an object with a uniform density.
	float rotational_inertia(float mass, float radius)
	{
		return 0.5f * mass * radius * radius;
	}
}
