#include "include/double_types.hpp"
#include "include/constants.hpp"

namespace simple_physics
{
	double speed(double distance, double time)
    	{
        	return fabs(distance) / time;
    	}

	double velocity(double displacement, double time)
    	{
        	return displacement / time;
    	}

    	double displacement(double velocity, double time)
    	{
        	return velocity / time;
    	}

    	double distance(double speed, double time)
    	{
        	return fabs(speed) / time;
    	}

    	double time(double distance, double velocity)
    	{
        	return distance / velocity;
    	}

    	double displacement_2(double velocity_1, double time, double acceleration)
    	{
        	return velocity_1 * time + (1 / 2) * acceleration * time * time;
    	}

    	double displacement_3(double velocity_1, double velocity_2, double acceleration)
    	{
        	return (velocity_2 * velocity_2 - velocity_1 * velocity_1) / (2 * acceleration);
    	}

    	double acceleration(double velocity_2, double velocity_1, double time_2, double time_1)
    	{
        	return (velocity_2 - velocity_1) / (time_2 - time_1);
    	}

    	double time(double frequency)
    	{
        	return 1 / frequency;
    	}

    	double frequency(double time)
    	{
        	return 1 / time;
    	}

    	double final_free_fall_velocity(double acceleration_of_gravity, double initial_height)
    	{
        	return sqrt(2 * acceleration_of_gravity * initial_height);
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

    	double dry_friction(double coefficient_of_friction, double normal_force)
    	{
        	return coefficient_of_friction * normal_force;
    	}

    	double newtons_gravitational_force(double mass_1, double mass_2, double radius_between_masses)
    	{
        	return NEWTONS_GRAVITATIONAL_CONSTANT * mass_1 * mass_2 / (radius_between_masses * radius_between_masses);
    	}

    	double escape_speed(double mass, double radius)
    	{
        	return sqrt((2 * NEWTONS_GRAVITATIONAL_CONSTANT * mass) / radius);
    	}

    	double classical_kinetic_energy(double mass, double velocity)
    	{
        	return (1 / 2) * mass * velocity * velocity;
    	}

    	double gravitational_potential_energy(double mass, double gravitational_acceleration, double height)
    	{
        	return mass * gravitational_acceleration * height;
    	}

    	double orbital_period(double velocity, double radius)
    	{
        	return (2 * M_PI * radius) / velocity;
    	}

    	double elastic_potential_energy(const double spring_constant, double displacement)
    	{
        	return (1 / 2) * spring_constant * displacement * displacement;
    	}

    	double rotational_kinetic_energy(double rotational_inertia, double angular_velocity)
    	{
        	return (1 / 2) * rotational_inertia * angular_velocity * angular_velocity;
    	}

    	double rolling_object_kinetic_energy(double kinetic_energy, double rotational_kinetic_energy)
    	{
        	return kinetic_energy + rotational_kinetic_energy;
    	}

    	double relativistic_velocity_clamp(double velocity)
    	{
        	if(velocity > SPEED_OF_LIGHT)
        	{
            		return SPEED_OF_LIGHT;
        	}

        	else if(velocity < -SPEED_OF_LIGHT)
        	{
            		return -SPEED_OF_LIGHT;
        	}
        	else
        	{
            		return velocity;
        	}
    	}

    	double lorentz_factor(double velocity)
    	{
        	return 1 / sqrt(1 - (velocity * velocity) / (SPEED_OF_LIGHT * SPEED_OF_LIGHT));
    	}

    	double relativistic_time_dilation(double lorentz_factor, double proper_time)
    	{
        	return proper_time / lorentz_factor;
    	}

    	double relativistic_time_dilation_2(double velocity, double proper_time)
    	{
        	return proper_time / lorentz_factor(velocity);
    	}

    	double relativistic_time_dilation(double lorentz_factor, double proper_time_2, double proper_time_1)
    	{
        	return (proper_time_2 - proper_time_1) / lorentz_factor;
    	}

    	double relativistic_length_contraction(double lorentz_factor, double proper_length)
    	{
        	return (1 / lorentz_factor) * proper_length;
    	}

    	double relativistic_length_contraction_2(double velocity, double proper_length)
    	{
        	return lorentz_factor(velocity) * proper_length;
    	}

    	double relativistic_momentum(double lorentz_factor, double mass, double velocity)
    	{
        	return lorentz_factor * mass * velocity;
    	}

    	double relativistic_momentum(double velocity, double mass)
    	{
        	return lorentz_factor(velocity) * mass;
    	}

    	double mass_energy(double mass)
    	{
        return mass * SPEED_OF_LIGHT * SPEED_OF_LIGHT;
    }

    double energy_momentum(double momentum, double rest_mass)
    {
        double momentum_part = (momentum * SPEED_OF_LIGHT) * (momentum * SPEED_OF_LIGHT);
        double mass_energy_part = mass_energy(rest_mass) * mass_energy(rest_mass);

        return sqrt(momentum_part + mass_energy_part);
    }

    double sum_of_momenta(const std::vector<std::pair<double_types::mass, double_types::velocity>> &momenta)
    {
        unsigned int momenta_size = momenta.size();
        double sum_of_momenta = 0.0;

        for(unsigned int i = 0; i < momenta_size; i++)
        {
            sum_of_momenta += momenta[i].first * momenta[i].second;
        }

        return sum_of_momenta;
    }

    double sum_of_forces(std::vector<std::pair<double_types::mass, double_types::acceleration>> forces)
    {
        unsigned int forces_size = forces.size();
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
        unsigned int mass_moments_size = mass_moments.size();

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
        return mass * gravitational_acceleration * pendulum_length * (1 - cos(angle));
    }

    double efficiency(double energy_out, double energy_in)
    {
        return energy_out / energy_in;
    }

    double power(double energy, double time)
    {
        return energy / time;
    }

    double power_velocity(double force, double velocity, double applied_angle)
    {
        return force * velocity * cos(applied_angle);
    }

    double drag_force(double air_density, double velocity, double drag_coefficient, double cross_sectional_area)
    {
        return (1 / 2) * air_density * velocity * velocity * drag_coefficient * cross_sectional_area;
    }

    double index_of_refraction(double speed_of_light_in_medium)
    {
        return SPEED_OF_LIGHT / speed_of_light_in_medium;
    }

    double photon_energy(double frequency)
    {
        return PLANCKS_CONSTANT * frequency;
    }

    double photon_momentum(double wavelength)
    {
        return PLANCKS_CONSTANT * wavelength;
    }

    double wave_velocity(double frequency, double wavelength)
    {
        return frequency * wavelength;
    }

    double heisenberg_momentum_uncertainty(double max_position, double min_position)
    {
        return REDUCED_PLANCKS_CONSTANT / (2 * (max_position - min_position));
    }

    double heisenberg_position_uncertainty(double max_momentum, double min_momentum)
    {
        return REDUCED_PLANCKS_CONSTANT / (2 * (max_momentum - min_momentum));
    }

    double boltzman_entropy(unsigned long multiplicity)
    {
        return BOLTZMANS_CONSTANT * log(multiplicity);
    }

    double speed_from_velocity_vec_2(double velocity_x, double velocity_y)
    {
        return sqrt(velocity_x * velocity_x + velocity_y * velocity_y);
    }

    double momentum_from_velocity_vec_2(double mass, vec_2 velocity)
    {
        return mass * sqrtf(velocity.x * velocity.x + velocity.y * velocity.y);
    }

    double momentum_from_velocity_vec_3(double mass, vec_3 velocity)
    {
        return mass * sqrtf(velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z);
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
        return (3 / 2) * BOLTZMANS_CONSTANT * gas_temperature;
    }

    double reynolds_number(double flow_speed, double characteristic_linear_dimension_as_length, double kinematic_viscosity)
    {
        return (flow_speed * characteristic_linear_dimension_as_length) / kinematic_viscosity;
    }

    double reynolds_number_2(double fluid_density, double flow_speed, double characteristic_linear_dimension_as_length, double dynamic_viscosity)
    {
        return (fluid_density * flow_speed * characteristic_linear_dimension_as_length) / dynamic_viscosity;
    }

    double drag_coefficient(double wet_area, double front_area, double bejan_number, double reynolds_number)
    {
        return 2 * (wet_area / front_area) * (bejan_number / (reynolds_number * reynolds_number));
    }

    double ballistic_coefficient(double mass, double drag_coefficient, double cross_sectional_area)
    {
        return (mass * drag_coefficient) / cross_sectional_area;
    }

    double ballistic_coefficient_2(double mass, double drag_coefficient, double cross_sectional_area)
    {
        return (mass * drag_coefficient) / cross_sectional_area;
    }

    double maluses_law(double initial_intensity, double angle_between_polarizer_and_initial_polarization_direction)
    {
        return initial_intensity * cos(angle_between_polarizer_and_initial_polarization_direction) * cos(angle_between_polarizer_and_initial_polarization_direction);
    }

    double rayleigh_criterion(double light_wavelength, double lens_aperture_diameter)
    {
        return RAYLEIGHS_CRITERION_CONSTANT * (light_wavelength / lens_aperture_diameter);
    }

    double lateral_resolution(double light_wavelength, double half_angle_of_light, double index_of_refraction)
    {
        return (RAYLEIGHS_CRITERION_CONSTANT * light_wavelength) / (2 * index_of_refraction * sin(half_angle_of_light));
    }

    double luminosity_distance(double luminosity, double redshift, double angular_diameter_distance)
    {
        return luminosity / (4 * M_PI * (1 + redshift) * (1 + redshift) * angular_diameter_distance);
    }
    
    double wave_intensity(double power, double area)
    {
        return power / area;
    }
    
    double orbital_period(double mass_of_orbited_body)
    {
	return (4 * M_PI * M_PI) / (NEWTONS_GRAVITATIONAL_CONSTANT * mass_of_orbited_body);
    }
	
    double rocket_delta_velocity(double specific_impulse, double gravitational_acceleration, double initial_mass, double final_mass)
    {
	return specific_impulse * gravitational_acceleration * log(initial_mass / final_mass);
    }
	
	double doppler_effect(float sound_wave_speed, double observer_velocity, double source_velocity, double origional_sound_wave_frequency)
    	{
		return ((sound_wave_speed + observer_velocity) / (sound_wave_speed + source_velocity)) * origional_sound_wave_frequency;
	}
	
	double spectral_radiance(double electromagnetic_frequency, double absolute_temperature)
	{
		double first_half = (((2 * simple_physics::PLANCKS_CONSTANT * electromagnetic_frequency * electromagnetic_frequency * electromagnetic_frequency) / (simple_physics::SPEED_OF_LIGHT * simple_physics::SPEED_OF_LIGHT)));
		double second_half = (1 / expf(simple_physics::PLANCKS_CONSTANT * electromagnetic_frequency / simple_physics::BOLTZMANS_CONSTANT * absolute_temperature) - 1);
		return first_half * second_half;
	}
	
	double coulombs_force(double charge_1, double charge_2, double distance_between_charges)
	{
		return (COULOMBS_CONSTANT * charge_1 * charge_2) / (distance_between_charges * distance_between_charges);
	}
	
	double integrate_jerk_to_acceleration(double jerk, double delta_time)
	{
		return jerk * delta_time;
	}
	
	double integrate_acceleration_to_velocity(double acceleration, double delta_time)
	{
		return acceleration * delta_time;
	}
	
	double integrate_velocity_to_position(double velocity, double delta_time)
	{
		return velocity * delta_time;
	}
	
	double integrate_jerk_to_position(double jerk, double delta_time)
	{
		return integrate_velocity_to_position
		(
			integrate_acceleration_to_velocity
			(
				integrate_jerk_to_acceleration
				(
					jerk, delta_time
				)
				, delta_time
			)
			, delta_time
		);
	}
	
	double integrate_acceleration_to_position(double acceleration, double delta_time)
	{
		return integrate_velocity_to_position
		(
			integrate_acceleration_to_velocity
			(
				acceleration, delta_time
			)
			, delta_time
		);
	}
	
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
		2 * M_PI * sqrt(mass / spring_constant);
	}
	
	double harmonic_oscillator_position(double amplitude, double frequency, double time, double phase)
	{
		return amplitude * sin(2 * M_PI * frequency * time + phase);
	}
	
	double total_power_radiated(double body_area, double emissivity, double body_temperature)
        {
                return body_area * emissivity * STEFAN_BOLTZMAN_CONSTANT * pow(body_temperature, 4);
        }
}
