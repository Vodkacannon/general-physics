#include <cmath>
#include "include/constants.hpp"

namespace general_physics 
{
	double orbital_period(double mass_of_orbited_body)
	{
		return (4.0 * M_PI * M_PI) / (NEWTON_GRAVITATIONAL_CONSTANT * mass_of_orbited_body);
	}
	
	double rocket_delta_velocity(double specific_impulse, double gravitational_acceleration, double initial_mass, double final_mass)
	{
		return specific_impulse * gravitational_acceleration * log(initial_mass / final_mass);
	}
	
	double newtons_gravitational_force(double mass_1, double mass_2, double radius_between_masses)
	{
		return NEWTON_GRAVITATIONAL_CONSTANT * mass_1 * mass_2 / (radius_between_masses * radius_between_masses);
	}

	double escape_speed(double mass, double radius)
	{
		return sqrt((2.0 * NEWTON_GRAVITATIONAL_CONSTANT * mass) / radius);
	}
	
	double keplers_second_law(double major_axis, double minor_axis, double orbital_period)
	{
		return  (major_axis  * minor_axis * orbital_period) / 2.0;
	}
	
	double keplers_third_law(double semi__major_axis, double mass_of_orbited_body)
	{
		return 2.0 * M_PI * sqrt(pow(semi__major_axis, 3.0) / (NEWTON_GRAVITATIONAL_CONSTANT * mass_of_orbited_body));
	}
	
	double keplers_equation(double eccentric_anomaly, double eccentricity)
	{
		return eccentric_anomaly - eccentricity * sin(eccentric_anomaly);
	}

    //This function may be incorrect. It has a solved derivative term.
	double spiral_galaxy_rotation_velocity(double radius, double galaxy_mass)
	{
		return sqrt(NEWTON_GRAVITATIONAL_CONSTANT * galaxy_mass / radius);
	}

	double MOND_standard_interpolate(double acceleration) 
	{
		return sqrt(1.0 / (1.0 + pow(MOND_TRANSITION_CONSTANT / acceleration, 2.0)));
	}

	//MOND.
	double milgroms_law(double orbited_mass, double orbiting_mass, double orbiting_mass_acceleration, double orbital_radius) 
	{
		return 
		NEWTON_GRAVITATIONAL_CONSTANT * orbited_mass * orbiting_mass /
		(MOND_standard_interpolate(orbiting_mass_acceleration) * orbital_radius * orbital_radius);
	}
}
