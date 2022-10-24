#pragma once
#include <string>

namespace general_physics
{
	/*
	Calculate the number of significant figures of a float.
	This function is not fully accurate!
	*/
	float significant_figures(float value);
	
	float sum_of_momenta(const std::vector<std::pair<float_types::mass, float_types::velocity>>& momenta);
	
	float sum_of_forces(const std::vector<std::pair<float_types::mass, float_types::acceleration>>& forces);

	float center_of_mass(const std::vector<std::pair<float_types::mass, float_types::radius_from_zero>>& mass_moments);

	//Between two plates.
	float casimir_plates_force(float area_of_plate_front, float distance_between_plates);
	
	//Between two plates.
	float casimir_plates_pressure(float area_of_plate_front, float distance_between_plates);
	
	//Energy to separate (Between two plates).
	float casimir_energy_2_plates(float area_of_plate_front, float distance_between_plates);
	
	float lorentz_force(float charge, float velocity, float magnetic_field_strength, float angle_between_magnetic_field_and_velocity);
	
	float magnetic_force(float particle_charge, float particle_velocity, magnetic_field, float angle_between_velocity_and_field);
	
	float magnetic_flow_meter_induced_voltage(float magnetic_field, float distance_between_electrodes, float liquid_velocity);
	
	float magnetic_h_field(float magnetic_field, float magnetization_vector);
}
