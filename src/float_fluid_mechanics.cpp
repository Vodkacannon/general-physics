#include <cmath>
#include "../include/float_fluid_mechanics.h"

namespace general_physics
{
	float bouyant_force(float fluid_density, float body_immersion_volume, float gravitational_acceleration) 
	{
		return fluid_density * body_immersion_volume * gravitational_acceleration;
	}

	float bouyant_weight(float fluid_density, float body_immersion_volume, float gravitational_acceleration, float actual_weight)
	{
		return actual_weight - bouyant_force(fluid_density, body_immersion_volume, gravitational_acceleration);
	}
	
	//Pipe volume flow rate.
	float hagen_poiseuille_law(float pressure_difference, float pipe_radius, float fluid_viscosity, float pipe_length)
	{
		return (M_PI * pressure_difference * pipe_radius * powf(pipe_radius, 4.0f)) / (8.0f * fluid_viscosity * pipe_length);
	}
}