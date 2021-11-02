//simple-physics: A verbose C++ physics library.
//Functions with fabs() in them are scalar.

#include <math.h>
#include "include/float_types.hpp"
#include "include/constants.hpp"

namespace simple_physics
{
	float momentum(float mass, float velocity)
	{
		return mass * velocity;
	}

	float force(float mass, float acceleration)
	{
		return mass * acceleration;
	}

	float pressure(float force, float area)
	{
		return force / area;
	}

	float density(float mass, float volume)
	{
		return mass / volume;
	}

	float impulse(float force, float time)
	{
		return force * time;
	}

	float work(float force, float distance)
	{
		return force * distance;
	}

	float final_free_fall_velocity(float acceleration_of_gravity, float initial_height)
	{
		return sqrtf(2 * acceleration_of_gravity * initial_height);
	}

	float dry_friction(float coefficient_of_friction, float normal_force)
	{
		return coefficient_of_friction * normal_force;
	}

	float newtons_gravitational_force(float mass_1, float mass_2, float radius_between_masses)
	{
		return NEWTONS_GRAVITATIONAL_CONSTANT * mass_1 * mass_2 / (radius_between_masses * radius_between_masses);
	}

	float escape_speed(float mass, float radius)
	{
		return sqrtf((2 * NEWTONS_GRAVITATIONAL_CONSTANT * mass) / radius);
	}

	float classical_kinetic_energy(float mass, float velocity)
	{
		return (1 / 2) * mass * velocity * velocity;
	}

	float gravitational_potential_energy(float mass, float gravitational_acceleration, float height)
	{
		return mass * gravitational_acceleration * height;
	}

	float orbital_period(float velocity, float radius)
	{
		return (2 * M_PI * radius) / velocity;
	}

	float elastic_potential_energy(const float spring_constant, float displacement)
	{
		return (1 / 2) * spring_constant * displacement * displacement;
	}

	float rotational_kinetic_energy(float rotational_inertia, float angular_velocity)
	{
		return (1 / 2) * rotational_inertia * angular_velocity * angular_velocity;
	}

	float rolling_object_kinetic_energy(float kinetic_energy, float rotational_kinetic_energy)
	{
		return kinetic_energy + rotational_kinetic_energy;
	}
	
	float sum_of_momenta(const std::vector<std::pair<mass, velocity>> &momenta)
	{
		unsigned int momenta_size = momenta.size();
		float sum_of_momenta = 0.0;

		for(unsigned int i = 0; i < momenta_size; i++)
		{
			sum_of_momenta += momenta[i].first * momenta[i].second;
		}

		return sum_of_momenta;
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

	float heat_flow(float mass, float specific_heat_capacity, float temperature_change)
	{
		return mass * specific_heat_capacity * temperature_change;
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

	float efficiency(float energy_out, float energy_in)
	{
		return energy_out / energy_in;
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

	float photon_energy(float frequency)
	{
		return PLANCKS_CONSTANT * frequency;
	}

	float photon_momentum(float wavelength)
	{
		return PLANCKS_CONSTANT * wavelength;
	}

	float wave_velocity(float frequency, float wavelength)
	{
		return frequency * wavelength;
	}

	float heisenberg_momentum_uncertainty(float max_position, float min_position)
	{
		return REDUCED_PLANCKS_CONSTANT / (2 * (max_position - min_position));
	}

	float heisenberg_position_uncertainty(float max_momentum, float min_momentum)
	{
		return REDUCED_PLANCKS_CONSTANT / (2 * (max_momentum - min_momentum));
	}

	float boltzman_entropy(unsigned int multiplicity)
	{
		return BOLTZMANS_CONSTANT * log(multiplicity);
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

	float ideal_gas_pressure(unsigned int moles, float temperature, float volume)
	{
		return (moles * IDEAL_GAS_CONSTANT * temperature) / volume;
	}

	float average_kinetic_energy_of_ideal_gas(float gas_temperature)
	{
		return (3 / 2) * BOLTZMANS_CONSTANT * gas_temperature;
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

	float maluses_law(float initial_intensity, float angle_between_polarizer_and_initial_polarization_direction)
	{
		return initial_intensity * cos(angle_between_polarizer_and_initial_polarization_direction) * cos(angle_between_polarizer_and_initial_polarization_direction);
	}
	
	float rayleigh_criterion(float light_wavelength, float lens_aperture_diameter)
	{
		return RAYLEIGHS_CRITERION_CONSTANT * (light_wavelength / lens_aperture_diameter);
	}
	
	float lateral_resolution(float light_wavelength, float half_angle_of_light, float index_of_refraction)
	{
		return (RAYLEIGHS_CRITERION_CONSTANT * light_wavelength) / (2 * index_of_refraction * sin(half_angle_of_light));
	}
									    
	float luminosity_distance(float luminosity, float redshift, float angular_diameter_distance)
	{
		return luminosity / (4 * M_PI * (1 + redshift) * (1 + redshift) * angular_diameter_distance); 	
	}
	
	float wave_intensity(float power, float area)
	{
		return power / area;
	}
	
	float orbital_period(float mass_of_orbited_body)
	{
		return (4 * M_PI * M_PI) / (NEWTONS_GRAVITATIONAL_CONSTANT * mass_of_orbited_body);
	}
	
	float rocket_delta_velocity(float specific_impulse, float gravitational_acceleration, float initial_mass, float final_mass)
	{
		return specific_impulse * gravitational_acceleration * log(initial_mass / final_mass);
	}
	
	float doppler_effect(float sound_wave_speed, float observer_velocity, float source_velocity, float origional_sound_wave_frequency)
	{
		return ((sound_wave_speed + observer_velocity) / (sound_wave_speed + source_velocity)) * origional_sound_wave_frequency;
	}
	
	float spectral_radiance(float electromagnetic_frequency, float absolute_temperature)
	{
		float first_half = (((2 * PLANCKS_CONSTANT * electromagnetic_frequency * electromagnetic_frequency * electromagnetic_frequency) / (simple_physics::SPEED_OF_LIGHT * simple_physics::SPEED_OF_LIGHT)));
		float second_half = (1 / expf(PLANCKS_CONSTANT * electromagnetic_frequency / BOLTZMANS_CONSTANT * absolute_temperature) - 1);
		return first_half * second_half;
	}
	
	float coulombs_force(float charge_1, float charge_2, float distance_between_charges)
	{
		return (COULOMBS_CONSTANT * charge_1 * charge_2) / (distance_between_charges * distance_between_charges);
	}
	
	float period_of_spring_with_mass(float mass, float spring_constant)
	{
		2 * M_PI * sqrtf(mass / spring_constant);
	}
	
	float harmonic_oscillator_position(float amplitude, float frequency, float time, float phase)
	{
		return amplitude * sinf(2 * M_PI * frequency * time + phase);
	}

        float total_power_radiated(float body_area, float emissivity, float body_temperature)
        {
                return body_area * emissivity * STEFAN_BOLTZMAN_CONSTANT * powf(body_temperature, 4);
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
