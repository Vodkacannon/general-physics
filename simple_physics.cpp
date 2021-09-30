#include "simple_phys.h"

namespace physics
{
	float speed(float distance, float time)
	{
		return fabs(distance) / time;
	}

	inline float velocity(float displacement, float time)
	{
		return displacement / time;
	}

	inline float displacement(float velocity, float time)
	{
		return velocity / time;
	}

	float distance(float speed, float time)
	{
		return fabs(speed) / time;
	}

	float time(float distance, float velocity)
	{
		return distance / velocity;
	}

	float displacement(float velocity_1, float time, float acceleration)
	{
		velocity_1 * time + (1 / 2) * acceleration * time * time;
	}

	float displacement(float velocity_1, float velocity_2, float acceleration)
	{
		return (velocity_2 * velocity_2 - velocity_1 * velocity_1) / (2 * a)
	}

	float acceleration(float velocity_2, float velocity_1, float time_2, float time_1)
	{
		return (velocity_2 - velocity_1) / (time_2 - time_1);
	}

	inline float mometum(float mass, float velocity)
	{
		return mass * velocity;
	}

	inline float force(float mass, float acceleration)
	{
		return mass	* acceleration;
	}

	inline float pressure(float force, float area)
	{
		return force / area;
	}

	inline float impulse(float force, float time)
	{
		return force * time;
	}

	inline float time(float frequency)
	{
		return 1 / frequency;
	}

	inline float frequency(float time)
	{
		return 1 / time;
	}

	float angular_velocity(float angle, float time)
	{
		return angle / time;
	}

	float angular_velocity(float angle_2, float angle_1, float time_2, float time_1)
	{
		return (angle_2 - angle_1) / (time2 - time1);
	}

	float angular_acceleration(float angular_velocity, float time)
	{
		return angular_velocity / time;
	}

	float angular_acceleration(float angular_velocity_2, float angular_velocity_1, float time_2, float time_1)
	{
		return (angular_velocity_2 - angular_velocity_1) / (time_2 - time_1);
	}

	float torque(float radius, float force, float angle)
	{
		return radius * force * sin(angle);
	}

	inline float torque(float inertia, float angular_acceleration)
	{
		return inertia * angular_acceleration;
	}

	inline float dry_friction(float coefficient_of_friction, float normal_force)
	{
		return coefficient_of_friction * normal_force;
	}

	float newtons_gravitational_force(float mass_1, float mass_2, float radius_between_masses)
	{
		return NEWTONS_GRAVITATIONAL_CONSTANT * mass_1 * mass_2 / (radius_between_masses * radius_between_masses);
	}

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

	float rotational_kinetic_energy(float rotational_inertia, float angular_velocity)
	{
		return (1 / 2) * rotational_inertia * angular_velocity * angular_velocity;
	}

	float relativistic_velocity_clamp(float velocity)
	{
		return std::clamp(velocity, -SPEED_OF_LIGHT, SPEED_OF_LIGHT);
	}

	float lorentz_factor(float velocity)
	{
		return 1 / sqrtf(1 - (velocity * velocity) / (SPEED_OF_LIGHT * SPEED_OF_LIGHT));
	}

	float relativistic_time_dilation(float lorentz_factor, float proper_time)
	{
		return proper_time / lorentz_factor;
	}

	float relativistic_time_dilation(float velocity, float proper_time)
	{
		return proper_time / lorentz_factor(velocity);
	}

	float relativistic_time_dilation(float lorentz_factor, float proper_time_2, float proper_time_1)
	{
		return (proper_time_2 - proper_time_1) / lorentz_factor;
	}

	float relativistic_length_contraction(float lorentz_factor, float proper_length)
	{
		return (1 / lorentz_factor) * proper_length;
	}

	float relativistic_length_contraction(float velocity, float proper_length)
	{
		return lorentz_factor(velocity) * proper_length;
	}

	//Testing a templated function.
	template <typename T>
	T relativistic_momentum(T lorentz_factor, T mass, T velocity)
	{
		return lorentz_factor * mass * velocity;
	}

	float relativistic_momentum(float velocity, float mass)
	{
		return lorentz_factor(velocity) * mass;
	}

	float sum_of_forces(const std::vector<std::pair<mass, acceleration>> &forces)
	{
		unsigned int forces_size = forces.size();
		float sum_of_forces = 0.0;

		for(unsigned int i = 0; i < forces_size; i++)
		{
			sum_of_forces += forces[i].first * forces[i].second;
		}

		return sum_of_forces;
	}

	float center_of_mass(const std::vector<std::pair<mass, radius_from_center>> &mass_moments)
	{
		float sum_of_masses = 0.0;
		float mass_moment_sum = 0.0;
		unsigned int mass_moments_size = mass_moments_size.size();

		for(unsigned int i = 0; i < mass_moments_size; i++)
		{
			mass_moment_sum += mass_moments[i].first * mass_moments[i].second;
			sum_of_masses += mass_moments.first;
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

	float heat_flow(float mass, float specific_heat, float temperature)
	{
		return mass * specific_heat * temperature;	
	}

	float heat_flow(float mass, float specific_heat_2, float specific_heat_1, float temperature)
	{
		return mass * (specific_heat_2 - specific_heat_1) * temperature;	
	}

	float thermal_energy_transfer(float thermal_mass_of_body, float temperature_2, float temperature_1)
	{
		return thermal_mass_of_body * (temperature_2 - temperature_1);
	}

	float pendulum_potential_energy(float mass, float gravitational_acceleration, float pendulum_length, float angle)
	{
		return mass * gravitational_acceleration * pendulum_length * (1 - cos(angle));
	}
}
