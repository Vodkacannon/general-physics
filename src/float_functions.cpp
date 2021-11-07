//simple-physics: A verbose C++ physics library.
//Functions with fabs() in them are scalar.

#include <math.h>
#include "include/float_types.hpp"
#include "include/constants.hpp"

namespace simple_physics
{
	float classical_kinetic_energy(float mass, float velocity)
	{
		return (1 / 2) * mass * velocity * velocity;
	}

	float gravitational_potential_energy(float mass, float gravitational_acceleration, float height)
	{
		return mass * gravitational_acceleration * height;
	}

	float elastic_potential_energy(const float spring_constant, float displacement)
	{
		return (1 / 2) * spring_constant * displacement * displacement;
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

	//Calculate the number of significant figures of a float.
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
	
	float power(float energy, float time)
	{
		return energy / time;
	}

	float power_velocity(float force, float velocity, float applied_angle)
	{
		return force * velocity * cos(applied_angle);
	}

	float drag_force(float air_density, float velocity, float drag_coefficient, float cross_sectional_area)
	{
		return (1 / 2) * air_density * velocity * velocity * drag_coefficient * cross_sectional_area;
	}

	float index_of_refraction(float speed_of_light_in_medium)
	{
		return SPEED_OF_LIGHT / speed_of_light_in_medium;
	}
	
	float wave_velocity(float frequency, float wavelength)
	{
		return frequency * wavelength;
	}

	float speed_from_velocity_vec_2(float velocity_x, float velocity_y)
	{
		return sqrt(velocity_x * velocity_x + velocity_y * velocity_y);
	}

	float momentum_from_velocity_vec_2(float mass, const vec_2& velocity)
	{
		return mass * sqrtf(velocity.x * velocity.x + velocity.y * velocity.y);
	}

	float momentum_from_velocity_vec_3(float mass, const vec_3& velocity)
	{
		return mass * sqrtf(velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z);
	}

	float celcius_to_kelvin(float celcius)
	{
		return celcius + 273.5;
	}

	float kelvin_to_celcius(float kelvin)
	{
		return kelvin - 273.5;
	}

	float reynolds_number(float flow_speed, float characteristic_linear_dimension_as_length, float kinematic_viscosity)
	{
		return (flow_speed * characteristic_linear_dimension_as_length) / kinematic_viscosity;
	}

	float reynolds_number_2(float fluid_density, float flow_speed, float characteristic_linear_dimension_as_length, float dynamic_viscosity)
	{
		return (fluid_density * flow_speed * characteristic_linear_dimension_as_length) / dynamic_viscosity;
	}

	float drag_coefficient(float wet_area, float front_area, float bejan_number, double reynolds_number)
	{
		return 2 * (wet_area / front_area) * (bejan_number / (reynolds_number * reynolds_number));
	}

	float ballistic_coefficient(float mass, float drag_coefficient, float cross_sectional_area)
	{
		return (mass * drag_coefficient) / cross_sectional_area;
	}

	float ballistic_coefficient_2(float mass, float drag_coefficient, float cross_sectional_area)
	{
		return (mass * drag_coefficient) / cross_sectional_area;
	}
	
	float wave_intensity(float power, float area)
	{
		return power / area;
	}
	
	float doppler_effect(float sound_wave_speed, float observer_velocity, float source_velocity, float origional_sound_wave_frequency)
	{
		return ((sound_wave_speed + observer_velocity) / (sound_wave_speed + source_velocity)) * origional_sound_wave_frequency;
	}
	
	float period_of_spring_with_mass(float mass, float spring_constant)
	{
		2 * M_PI * sqrtf(mass / spring_constant);
	}
	
	float keplers_second_law(float major_axis, float minor_axis, float orbital_period)
	{
		return  (a  * b * orbital_period) / 2;
	}
	
	float keplers_third_law(float semi__major_axis, float mass_of_obrbited_body)
	{
		2 * M_PI * sqrtf(powf(semi__major_axis, 3) / (NEWTONS_GRAVITY_CONSTANT * mass_of_orbited_body));
	}
	
	float keplers_equation(float eccentric_anomaly, float eccentricity)
	{
		return eccentric_anomaly - eccentricity * sinf(eccentric_animaly);
	}
}
