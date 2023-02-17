#include <vector>
#include <string>
#include "include/double_types.hpp"
#include "include/constants.hpp"
#include "include/vec_2f.hpp"
#include "include/vec_3d.hpp"
#include "include/vec_2d.hpp"

namespace general_physics
{
    	double time(double frequency)
    	{
        	return 1.0 / frequency;
    	}

    	double frequency(double time)
    	{
        	return 1.0 / time;
    	}

    	double final_free_fall_velocity(double acceleration_of_gravity, double initial_height)
    	{
        	return sqrt(2.0 * acceleration_of_gravity * initial_height);
    	}

    	double centripedal_acceleration_from_tangental(double tangental_velocity, double radius)
    	{
        	return (tangental_velocity * tangental_velocity) / radius;
    	}

    	double centripedal_acceleration_from_angular(double angular_velocity, double radius)
    	{
        	return -angular_velocity * angular_velocity * radius;
    	}

    	double centripedal_force(double mass, double tangental_velocity, double radius)
    	{
        	return (mass * tangental_velocity * tangental_velocity) / radius;
    	}

    	double angular_velocity(double angle, double time)
    	{
        	return angle / time;
    	}

    	double angular_velocity(double angle_2, double angle_1, double time_2, double time_1)
    	{
        	return (angle_2 - angle_1) / (time_2 - time_1);
    	}

    	double angular_acceleration(double angular_velocity, double time)
    	{
        	return angular_velocity / time;
    	}

    	double angular_acceleration(double angular_velocity_2, double angular_velocity_1, double time_2, double time_1)
    	{
        	return (angular_velocity_2 - angular_velocity_1) / (time_2 - time_1);
    	}

    	double perpendicular_angular_momentum(double radius, double mass, double velocity, double perpendicular_angle)
    	{
        	return radius * mass * velocity * sin(perpendicular_angle);
    	}

    	double torque(double radius, double force, double angle)
    	{
        	return radius * force * sin(angle);
    	}

    	double torque(double inertia, double angular_acceleration)
    	{
        	return inertia * angular_acceleration;
    	}

    	double orbital_period(double velocity, double radius)
    	{
        	return (2.0 * M_PI * radius) / velocity;
    	}

    	double rotational_kinetic_energy(double rotational_inertia, double angular_velocity)
    	{
        	return 0.5 * rotational_inertia * angular_velocity * angular_velocity;
    	}

    	double rolling_object_kinetic_energy(double kinetic_energy, double rotational_kinetic_energy)
    	{
        	return kinetic_energy + rotational_kinetic_energy;
    	}

    double sum_of_forces(std::vector<std::pair<double_types::mass, double_types::acceleration>> forces)
    {
        size_t forces_size = forces.size();
        double sum_of_forces = 0.0;

        for(unsigned int i = 0; i < forces_size; i++)
        {
            sum_of_forces += forces[i].first * forces[i].second;
        }

        return sum_of_forces;
    }

    bool are_forces_in_equilibrium(const std::vector<std::pair<double_types::mass, double_types::acceleration>> &forces)
    {
        if(sum_of_forces(forces) == 0)
        {
            return true;
        }

        return false;
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

    //Calculate the number of significant figures of a double.
    double significant_figures(double value)
    {
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

    double heat_flow(double mass, double specific_heat_capacity, double temperature_change)
    {
        return mass * specific_heat_capacity * temperature_change;
    }

    double heat_flow(double mass, double specific_heat_2, double specific_heat_1, double temperature)
    {
        return mass * (specific_heat_2 - specific_heat_1) * temperature;
    }

    double thermal_energy_transfer(double thermal_mass_of_body, double temperature_2, double temperature_1)
    {
        return thermal_mass_of_body * (temperature_2 - temperature_1);
    }

    double pendulum_potential_energy(double mass, double gravitational_acceleration, double pendulum_length, double angle)
    {
        return mass * gravitational_acceleration * pendulum_length * (1.0 - cos(angle));
    }

    double efficiency(double energy_out, double energy_in)
    {
        return energy_out / energy_in;
    }

    double power_velocity(double force, double velocity, double applied_angle)
    {
        return force * velocity * cos(applied_angle);
    }

    double photon_energy(double frequency)
    {
        return PLANCKS_CONSTANT * frequency;
    }

    double photon_momentum(double wavelength)
    {
        return PLANCKS_CONSTANT * wavelength;
    }

    double heisenberg_momentum_uncertainty(double max_position, double min_position)
    {
        return REDUCED_PLANCKS_CONSTANT / (2.0 * (max_position - min_position));
    }

    double heisenberg_position_uncertainty(double max_momentum, double min_momentum)
    {
        return REDUCED_PLANCKS_CONSTANT / (2.0 * (max_momentum - min_momentum));
    }

    double boltzman_entropy(unsigned long multiplicity)
    {
        return BOLTZMANS_CONSTANT * log(multiplicity);
    }

    double speed_from_velocity_vec_2(double velocity_x, double velocity_y)
    {
        return sqrt(velocity_x * velocity_x + velocity_y * velocity_y);
    }

    double momentum_from_velocity_vec_2(double mass, vec_2d velocity)
    {
        return mass * sqrt(velocity.x * velocity.x + velocity.y * velocity.y);
    }

    double momentum_from_velocity_vec_3(double mass, vec_3d velocity)
    {
        return mass * sqrt(velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z);
    }

    double celcius_to_kelvin(double celcius)
    {
        return celcius + 273.5;
    }

    double kelvin_to_celcius(double kelvin)
    {
        return kelvin - 273.5;
    }

    double ideal_gas_pressure(unsigned int moles, double temperature, double volume)
    {
        return (moles * IDEAL_GAS_CONSTANT * temperature) / volume;
    }

    double average_kinetic_energy_of_ideal_gas(double gas_temperature)
    {
        return (3.0 / 2.0) * BOLTZMANS_CONSTANT * gas_temperature;
    }

    double reynolds_number_2(double fluid_density, double flow_speed, double characteristic_linear_dimension_as_length, double dynamic_viscosity)
    {
        return (fluid_density * flow_speed * characteristic_linear_dimension_as_length) / dynamic_viscosity;
    }

    double ballistic_coefficient_2(double mass, double drag_coefficient, double cross_sectional_area)
    {
        return (mass * drag_coefficient) / cross_sectional_area;
    }
	
	double doppler_effect(float sound_wave_speed, double observer_velocity, double source_velocity, double origional_sound_wave_frequency)
    	{
		return ((sound_wave_speed + observer_velocity) / (sound_wave_speed + source_velocity)) * origional_sound_wave_frequency;
	}
	
	double spectral_radiance(double electromagnetic_frequency, double absolute_temperature)
	{
		double first_half = (((2.0 * PLANCKS_CONSTANT * electromagnetic_frequency * electromagnetic_frequency * electromagnetic_frequency) / (SPEED_OF_LIGHT * SPEED_OF_LIGHT)));
		double second_half = (1.0 / exp(PLANCKS_CONSTANT * electromagnetic_frequency / BOLTZMANS_CONSTANT * absolute_temperature) - 1.0);
		return first_half * second_half;
	}
	
    double coulombs_force(double charge_1, double charge_2, double distance_between_charges);
	
	bool is_total_energy_zero(double kinetic_energy, double potential_energy, double double_tolerance)
	{
		if(fabs(kinetic_energy + potential_energy) <= double_tolerance)
		{
			return true;
		}
		
		return false;
	}
	
	double period_of_spring_with_mass(double mass, double spring_constant)
	{
		return 2.0 * M_PI * sqrt(mass / spring_constant);
	}
	
	double harmonic_oscillator_position(double amplitude, double frequency, double time, double phase)
	{
		return amplitude * sin(2.0 * M_PI * frequency * time + phase);
	}
	
	double total_power_radiated(double body_area, double emissivity, double body_temperature)
        {
                return body_area * emissivity * STEFAN_BOLTZMAN_CONSTANT * pow(body_temperature, 4);
        }
}
