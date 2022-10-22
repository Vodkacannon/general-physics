#pragma once

namespace general_physics
{
    float bouyant_force(float fluid_density, float body_immersion_volume, float gravitational_acceleration);
    float bouyant_weight(float fluid_density, float body_immersion_volume, float gravitational_acceleration, float actual_weight);
        
    //Pipe volume flow rate.
	float hagen_poiseuille_law(float pressure_difference, float pipe_radius, float fluid_viscosity, float pipe_length);
	
	float specific_weight(float fluid_density, float gravitational_acceleration);
	
	//Useful for compressible fluids.
	float cauchy_number(float fluid_density, float flow_velocity, float bulk_modulus_elasticity);
	
	//For when pressure difference is important.
	float euler_number(float pressure, float density, float fluid_velocity);
	
	//Ratio of pressure forces to inertial forces.
	float pressure_coefficient(float differential_pressure, float fluid_density, float fluid_velocity);
	
	//Inertia force to viscous or friction force ratio.
	float reynolds_number(float cross_sectional_velocity, float characteristic_length, float kinematic_viscosity);
	
	//For when fluid weight is important.
	float froude_number(float fluid_velocity, float gravitational_acceleration, float hydraulic_mean_depth);
}
