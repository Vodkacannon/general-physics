#pragma once

namespace simple_physics
{
  	//Calculate the number of significant figures of a float.
	//This function is not fully accurate.
	float significant_figures(float value)
	{
		std::string value_as_string = std::to_string(value);

		unsigned int string_length = value_as_string.length();
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
	
	float sum_of_momenta(const std::vector<std::pair<mass, velocity>> &momenta)
	{
		float sum_of_momenta = 0.0;
		
		for(const auto& momentum : momenta)
		{
			sum_of_momenta += momentum.first * momentum.second;
		}

		return sum_of_momenta;
	}

	float sum_of_forces(const std::vector<std::pair<mass, acceleration>> &forces)
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
		unsigned int mass_moments_size = mass_moments.size();

		for(unsigned int i = 0; i < mass_moments_size; i++)
		{
			mass_moment_sum += mass_moments[i].first * mass_moments[i].second;
			sum_of_masses += mass_moments[i].first;
		}

		return mass_moment_sum / sum_of_masses;
	}
}
