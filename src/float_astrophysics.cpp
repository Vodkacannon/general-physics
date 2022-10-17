#pragma once

#include <cmath>
#include "../include/constants.hpp"

namespace general_physics
{
	float orbital_period(float mass_of_orbited_body)
	{
		return (4 * M_PI * M_PI) / (NEWTONS_GRAVITATIONAL_CONSTANT * mass_of_orbited_body);
	}
	
	float rocket_delta_velocity(float specific_impulse, float gravitational_acceleration, float initial_mass, float final_mass)
	{
		return specific_impulse * gravitational_acceleration * logf(initial_mass / final_mass);
	}
	
	float newtons_gravitational_force(float mass_1, float mass_2, float radius_between_masses)
	{
		return NEWTONS_GRAVITATIONAL_CONSTANT * mass_1 * mass_2 / (radius_between_masses * radius_between_masses);
	}

	float escape_speed(float mass, float radius)
	{
		return sqrtf((2 * NEWTONS_GRAVITATIONAL_CONSTANT * mass) / radius);
	}

	
	
	float keplers_second_law(float major_axis, float minor_axis, float orbital_period)
	{
		return  (a  * b * orbital_period) / 2;
	}
	
	float keplers_third_law(float semi__major_axis, float mass_of_obrbited_body)
	{
		return 2 * M_PI * sqrtf(powf(semi__major_axis, 3) / (NEWTONS_GRAVITY_CONSTANT * mass_of_orbited_body));
	}
	
	float keplers_equation(float eccentric_anomaly, float eccentricity)
	{
		return eccentric_anomaly - eccentricity * sinf(eccentric_animaly);
	}

	//This function may be incorrect. It has a solved derivative term.
	float spiral_galaxy_rotation_velocity(float radius, float galaxy_mass)
	{
		return sqrtf(NEWTONS_GRAVITATIONAL_CONSTANT * galaxy_mass / radius)
	}

	float MOND_standard_interpolate(float acceleration) 
	{
		return sqrtf(1 / (1 + powf(MOND_TRANSITION_CONSTANT / acceleration), 2));
	}

	//MOND.
	float milgroms_law(float orbited_mass, float orbiting_mass, float orbiting_mass_acceleration, float orbital_radius) 
	{
		return NEWTONS_GRAVITATIONAL_CONSTANT * orbited_mass * orbiting_mass 
		/
		(MOND_standard_interpolate(orbiting_mass_acceleration) * orbital_radius * orbital_radius);
	}
}
