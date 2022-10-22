#pragma once
#include "include/constants.hpp"

namespace general_physics
{
        float relativistic_velocity_clamp(float velocity)
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

	float lorentz_factor(float velocity)
	{
		return 1 / sqrtf(1.0f - (velocity * velocity) / (SPEED_OF_LIGHT * SPEED_OF_LIGHT));
	}

	float relativistic_time_dilation(float lorentz_factor, float proper_time)
	{
		return proper_time / lorentz_factor;
	}

	float relativistic_time_dilation_2(float velocity, float proper_time)
	{
		return proper_time / lorentz_factor(velocity);
	}

	float relativistic_time_dilation(float lorentz_factor, float proper_time_2, float proper_time_1)
	{
		return (proper_time_2 - proper_time_1) / lorentz_factor;
	}

	float relativistic_length_contraction(float lorentz_factor, float proper_length)
	{
		return (1 / lorentz_factor) * proper_length;
	}

	float relativistic_length_contraction_2(float velocity, float proper_length)
	{
		return lorentz_factor(velocity) * proper_length;
	}
	
	float relativistic_momentum(float lorentz_factor, float mass, float velocity)
	{
		return lorentz_factor * mass * velocity;
	}
	
	float relativistic_momentum(float velocity, float mass)
	{
		return lorentz_factor(velocity) * mass;
	}

	float mass_energy(float mass)
	{
		return mass * SPEED_OF_LIGHT * SPEED_OF_LIGHT;
	}

	float energy_momentum(float momentum, float rest_mass)
	{
		float momentum_part = (momentum * SPEED_OF_LIGHT) * (momentum * SPEED_OF_LIGHT);
		float mass_energy_part = mass_energy(rest_mass) * mass_energy(rest_mass);
		
		return sqrtf(momentum_part + mass_energy_part);
	}

	float relativistic_kinetic_energy(float mass_energy, float velocity)
	{
		return mass_energy * (lorentz_factor(velocity) - 1);
	}
}
