#pragma once

#include <string>

namespace general_physics
{
	/*
	Calculate the number of significant figures of a double.
	This function is not fully accurate!
	*/
	double significant_figures(double value);
	
	double sum_of_momenta(const std::vector<std::pair<double_types::mass, double_types::velocity>>& momenta);
	
	double sum_of_forces(const std::vector<std::pair<double_types::mass, double_types::acceleration>>& forces);

	double center_of_mass(const std::vector<std::pair<double_types::mass, double_types::radius_from_zero>>& mass_moments);

	//Between two plates.
	double casimir_plates_force(double area_of_plate_front, double distance_between_plates);
	
	//Between two plates.
	double casimir_plates_pressure(double area_of_plate_front, double distance_between_plates);
	
	//Energy to separate (Between two plates).
	double casimir_energy_2_plates(double area_of_plate_front, double distance_between_plates);
	
	double lorentz_force(double charge, double velocity, double magnetic_field_strength, double angle_between_magnetic_field_and_velocity);
	
	double magnetic_force(double particle_charge, double particle_velocity, magnetic_field, double angle_between_velocity_and_field);
	
	double magnetic_flow_meter_induced_voltage(double magnetic_field, double distance_between_electrodes, double liquid_velocity);
	
	double magnetic_h_field(double magnetic_field, double magnetization_vector);
}
