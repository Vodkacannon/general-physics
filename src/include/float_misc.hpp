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
}
