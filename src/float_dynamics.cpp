#include <math.h>

namespace simple_physics
{
        float momentum(float mass, float velocity)
	{
		return mass * velocity;
	}

	float force(float mass, float acceleration)
	{
		return mass * acceleration;
	}

	float pressure(float force, float area)
	{
		return force / area;
	}

	float density(float mass, float volume)
	{
		return mass / volume;
	}

	float impulse(float force, float time)
	{
		return force * time;
	}

	float work(float force, float distance)
	{
		return force * distance;
	}
	
	float dry_friction(float coefficient_of_friction, float normal_force)
	{
		return coefficient_of_friction * normal_force;
	}
	
	float power(float energy, float time)
	{
		return energy / time;
	}
	
	float power(float force, float velocity, float applied_angle)
	{
		return force * velocity * cosf(applied_angle);
	}

	float drag_force(float air_density, float velocity, float drag_coefficient, float cross_sectional_area)
	{
		return (1 / 2) * air_density * velocity * velocity * drag_coefficient * cross_sectional_area;
	}
	
	float classical_kinetic_energy(float mass, float velocity)
	{
		return (1 / 2) * mass * velocity * velocity;
	}

	float gravitational_potential_energy(float mass, float gravitational_acceleration, float height)
	{
		return mass * gravitational_acceleration * height;
	}

	float elastic_potential_energy(const float spring_constant, float displacement)
	{
		return (1 / 2) * spring_constant * displacement * displacement;
	}
}
