#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include "include/constants.hpp"
#include "include/float_types.hpp"

namespace general_physics
{
  	/*
	* DEPRICATED.
	Calculate the number of significant figures of a float.
	This function is not fully accurate!
	*/
	float significant_figures(float value)
	{
		std::cout << "significant_figures(float value) is depricated." << std::endl;
		std::string value_as_string = std::to_string(value);

		size_t string_length = value_as_string.length();
		unsigned short significant_figure_count = 0;

		for(unsigned int i = 0; i < string_length; i++)
		{
			if(value_as_string[0] == '0')
			{
				continue;
			}
			else
			{
				significant_figure_count++; 
			}
		}

		return significant_figure_count;
	}
	
	float sum_of_momenta(const std::vector<std::pair<float_types::mass, float_types::velocity>> &momenta)
	{
		float sum_of_momenta = 0.0;
		
		for(const auto& momentum : momenta)
		{
			sum_of_momenta += momentum.first * momentum.second;
		}

		return sum_of_momenta;
	}

	float sum_of_forces(const std::vector<std::pair<float_types::mass, float_types::acceleration>> &forces)
	{
		float sum_of_forces = 0.0;
		
		for(const auto& force : forces)
		{
			sum_of_forces += force.first * force.second;
		}

		return sum_of_forces;
	}

	float center_of_mass(const std::vector<std::pair<float_types::mass, float_types::radius_from_zero>> &mass_moments)
	{
		float sum_of_masses = 0.0;
		float mass_moment_sum = 0.0;
		size_t mass_moments_size = mass_moments.size();

		for(unsigned int i = 0; i < mass_moments_size; i++)
		{
			mass_moment_sum += mass_moments[i].first * mass_moments[i].second;
			sum_of_masses += mass_moments[i].first;
		}

		return mass_moment_sum / sum_of_masses;
	}
	
	//Between two plates.
	float casimir_plates_force(float area_of_plate_front, float distance_between_plates)
	{
		return (M_PI * PLANCKS_CONSTANT * SPEED_OF_LIGHT * area_of_plate_front) / (480.0f * powf(distance_between_plates, 4.0f));
	}
	
	//Between two plates.
	float casimir_plates_pressure(float area_of_plate_front, float distance_between_plates)
	{
		return (REDUCED_PLANCKS_CONSTANT * SPEED_OF_LIGHT *  M_PI * M_PI) / (240.0f * powf(distance_between_plates, 4.0f));
	}
	
	//Energy to separate.
	float casimir_energy_2_plates(float area_of_plate_front, float distance_between_plates)
	{
		return (REDUCED_PLANCKS_CONSTANT * SPEED_OF_LIGHT * M_PI * M_PI * area_of_plate_front) / (720.0f * powf(distance_between_plates, 3.0f));
	}
	
	float lorentz_force(float charge, float velocity, float magnetic_field_strength, float angle_between_magnetic_field_and_velocity) 
	{
		return charge * velocity * magnetic_field_strength * sinf(angle_between_magnetic_field_and_velocity);
	}
}
