#pragma once
#include "include/constants.hpp"

namespace general_physics
{
    float relativistic_velocity_clamp(float velocity);

	float lorentz_factor(float velocity);
	
	float relativistic_time_dilation(float lorentz_factor, float proper_time);
	float relativistic_time_dilation_2(float velocity, float proper_time);

	float relativistic_time_dilation(float lorentz_factor, float proper_time_2, float proper_time_1);

	//Why is this time dilation equation different?
	float relativistic_time(float proper_time, float proper_velocity, float proper_travel_distance);
	
	float relativistic_length_contraction(float lorentz_factor, float proper_length);

	float relativistic_length_contraction_2(float velocity, float proper_length);
	
	float relativistic_momentum(float lorentz_factor, float mass, float velocity);
	
	float relativistic_momentum(float velocity, float mass);

	float mass_energy(float mass);

	float energy_momentum(float momentum, float rest_mass);

	float relativistic_kinetic_energy_1(float mass_energy, float velocity);

	float relativistic_kinetic_energy_2(float mass, float velocity);

	float relativistic_velocity_addition(float velocity_one, float velocity_two);
}
