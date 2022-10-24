#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include "include/constants.hpp"
#include "include/double_types.hpp"

namespace general_physics
{
  	/*
	DEPRICATED.
	Calculate the number of significant figures of a double.
	This function is not fully accurate!
	*/
	double significant_figures(double value)
	{
		std::cout << "significant_figures(double value) is depricated." << std::endl;
		std::string value_as_string = std::to_string(value);

		size_t string_length = value_as_string.length();
		int significant_figure_count = 0;

		for(size_t i = 0; i < string_length; i++)
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
	
	double sum_of_momenta(const std::vector<std::pair<double_types::mass, double_types::velocity>> &momenta)
	{
		double sum_of_momenta = 0.0;
		
		for(const auto& momentum : momenta)
		{
			sum_of_momenta += momentum.first * momentum.second;
		}

		return sum_of_momenta;
	}

	double sum_of_forces(const std::vector<std::pair<double_types::mass, double_types::acceleration>> &forces)
	{
		double sum_of_forces = 0.0;
		
		for(const auto& force : forces)
		{
			sum_of_forces += force.first * force.second;
		}

		return sum_of_forces;
	}

	double center_of_mass(const std::vector<std::pair<double_types::mass, double_types::radius_from_zero>> &mass_moments)
	{
		double sum_of_masses = 0.0;
		double mass_moment_sum = 0.0;
		size_t mass_moments_size = mass_moments.size();

		for(unsigned int i = 0; i < mass_moments_size; i++)
		{
			mass_moment_sum += mass_moments[i].first * mass_moments[i].second;
			sum_of_masses += mass_moments[i].first;
		}

		return mass_moment_sum / sum_of_masses;
	}
	
	//Between two plates.
	double casimir_plates_force(double area_of_plate_front, double distance_between_plates)
	{
		return (M_PI * PLANCKS_CONSTANT * SPEED_OF_LIGHT * area_of_plate_front) / (480.0 * pow(distance_between_plates, 4.0));
	}
	
	//Between two plates.
	double casimir_plates_pressure(double area_of_plate_front, double distance_between_plates)
	{
		return (REDUCED_PLANCKS_CONSTANT * SPEED_OF_LIGHT *  M_PI * M_PI) / (240.0 * pow(distance_between_plates, 4.0));
	}
	
	//Energy to separate.
	double casimir_energy_2_plates(double area_of_plate_front, double distance_between_plates)
	{
		return (REDUCED_PLANCKS_CONSTANT * SPEED_OF_LIGHT * M_PI * M_PI * area_of_plate_front) / (720.0 * pow(distance_between_plates, 3.0));
	}
	
	double lorentz_force(double charge, double velocity, double magnetic_field_strength, double angle_between_magnetic_field_and_velocity) 
	{
		return charge * velocity * magnetic_field_strength * sin(angle_between_magnetic_field_and_velocity);
	}
	
	double magnetic_force(double particle_charge, double particle_velocity, magnetic_field, double angle_between_velocity_and_field) 
	{
		return particle_charge * particle_velocity * magnetic_field_strength * sin(angle_between_velocity_and_field);
	}
	
	double magnetic_flow_meter_induced_voltage(double magnetic_field, double distance_between_electrodes, double liquid_velocity)
	{
		return -magnetic_field * distance between electrodes * liquid_velocity;
	}
	
	double magnetic_h_field(double magnetic_field, double magnetization_vector)
	{
		return VACCUM_PERMEABILITY * magnetic_field - magnetization_vector;
	}
}
