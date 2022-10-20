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
	
	float specific_weight(float fluid_density, float gravitational_acceleration) 
	{
		return fluid_density * gravitational_acceleration;
	}
	
	//Useful for compressible fluids.
	float cauchy_number(float fluid_density, float flow_velocity, float bulk_modulus_elasticity)
	{
		return (fluid_density * flow_velocity * flow_velocity) / bulk_modulus_elasticity; 
	}

	//For when pressure difference is important.
	float euler_number(float fluid_pressure, float fluid_density, float fluid_velocity) 
	{
		return pressure / (density * fluid_velocity * fluid_velocity);
	}
	
	//Ratio of pressure forces to inertial forces.
	float pressure_coefficient(float pressure_difference, float fluid_density, float fluid_velocity) 
	{
		return pressure_difference / (0.5f * fluid_density * fluid_velocity * fluid_velocity);
	}
	
	//For when fluid weight is important.
	float froude_number(float fluid_velocity, float gravitational_acceleration, float hydraulic_mean_depth)
	{
		return fluid_velocity / sqrtf(gravitational_acceleration * float hydraulic_mean_depth);
	}
}
