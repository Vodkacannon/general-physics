//simple-physics: A verbose C++ physics library.
//Functions with fabs() in them are scalar.

#include "include/simple_phys.hpp"

namespace simple_phys
{
	float speed(float distance, float time)
	{
		return fabs(distance) / time;
	}

	float velocity(float displacement, float time)
	{
		return displacement / time;
	}

	float displacement(float velocity, float time)
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

	float displacement_2(float velocity_1, float time, float acceleration)
	{
		velocity_1 * time + (1 / 2) * acceleration * time * time;
	}

	float displacement_3(float velocity_1, float velocity_2, float acceleration)
	{
		return (velocity_2 * velocity_2 - velocity_1 * velocity_1) / (2 * acceleration);
	}

	float acceleration(float velocity_2, float velocity_1, float time_2, float time_1)
	{
		return (velocity_2 - velocity_1) / (time_2 - time_1);
	}

	float mometum(float mass, float velocity)
	{
		return mass * velocity;
	}

	float force(float mass, float acceleration)
	{
		return mass	* acceleration;
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

	double work(double force, double distance)
	{
		return force * distance;
	}

	float time(float frequency)
	{
		return 1 / frequency;
	}

	float frequency(float time)
	{
		return 1 / time;
	}

	float final_free_fall_velocity(float acceleration_of_gravity, float initial_height)
	{
		return sqrt(2 * acceleration_of_gravity * initial_height);
	}

	float centripedal_acceleration_from_tangental(float tangental_velocity, float radius)
	{
		return (tangental_velocity * tangental_velocity) / radius;
	}

	float centripedal_acceleration_from_angular(float angular_velocity, float radius)
	{
		return -angular_velocity * angular_velocity * radius;
	}

	float centripedal_force(float mass, float tangental_velocity, float radius)
	{
		return (mass * tangental_velocity * tangental_velocity) / radius;
	}

	float angular_velocity(float angle, float time)
	{
		return angle / time;
	}

	float angular_velocity(float angle_2, float angle_1, float time_2, float time_1)
	{
		return (angle_2 - angle_1) / (time_2 - time_1);
	}

	float angular_acceleration(float angular_velocity, float time)
	{
		return angular_velocity / time;
	}

	float angular_acceleration(float angular_velocity_2, float angular_velocity_1, float time_2, float time_1)
	{
		return (angular_velocity_2 - angular_velocity_1) / (time_2 - time_1);
	}

	float perpendicular_angular_momentum(float radius, float mass, float velocity, float perpendicular_angle)
	{
		return radius * mass * velocity * sin(perpendicular_angle);
	}

	float torque(float radius, float force, float angle)
	{
		return radius * force * sin(angle);
	}

	float torque(float inertia, float angular_acceleration)
	{
		return inertia * angular_acceleration;
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
		return sqrt((2 * NEWTONS_GRAVITATIONAL_CONSTANT * mass) / radius);
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

	float relativistic_velocity_clamp(float velocity)
	{
		if(velocity > SPEED_OF_LIGHT){
			return SPEED_OF_LIGHT;
		}

		else if(velocity < -SPEED_OF_LIGHT){
			return -SPEED_OF_LIGHT;
		}
		else
		{
			return velocity;
		}
	}

	float lorentz_factor(float velocity)
	{
		return 1 / sqrt(1 - (velocity * velocity) / (SPEED_OF_LIGHT * SPEED_OF_LIGHT));
	}

	float relativistic_time_dilation(float lorentz_factor, float proper_time)
	{
		return proper_time / lorentz_factor;
	}

	float relativistic_time_dilation_2(float velocity, float proper_time)
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

	float relativistic_length_contraction_2(float velocity, float proper_length)
	{
		return lorentz_factor(velocity) * proper_length;
	}
	
	float relativistic_momentum(float lorentz_factor, float mass, float velocity)
	{
		return lorentz_factor * mass * velocity;
	}

	double relativistic_momentum(double lorentz_factor, double mass, double velocity);
	
	float relativistic_momentum(float velocity, float mass)
	{
		return lorentz_factor(velocity) * mass;
	}

	float mass_energy(float mass)
	{
		return mass * SPEED_OF_LIGHT * SPEED_OF_LIGHT;
	}

	float energy_momentum(float momentum, float rest_mass)
	{
		float momentum_part = (momentum * SPEED_OF_LIGHT) * (momentum * SPEED_OF_LIGHT);
		float mass_energy_part = mass_energy(rest_mass) * mass_energy(rest_mass);
		
		return sqrt(momentum_part + mass_energy_part);
	}

	float sum_of_momenta(const std::vector<std::pair<types::mass, types::velocity>> &momenta)
	{
		unsigned int momenta_size = momenta.size();
		float sum_of_momenta = 0.0;

		for(unsigned int i = 0; i < momenta_size; i++)
		{
			sum_of_momenta += momenta[i].first * momenta[i].second;
		}

		return sum_of_momenta;
	}

	float sum_of_forces(const std::vector<std::pair<types::mass, types::acceleration>> &forces)
	{
		unsigned int forces_size = forces.size();
		float sum_of_forces = 0.0;

		for(unsigned int i = 0; i < forces_size; i++)
		{
			sum_of_forces += forces[i].first * forces[i].second;
		}

		return sum_of_forces;
	}

	bool are_forces_in_equilibrium(const std::vector<std::pair<types::mass, types::acceleration>> &forces)
	{
		if(sum_of_forces(forces) == 0)
		{
			return true;
		}

		return false;
	}

	float center_of_mass(const std::vector<std::pair<types::mass, types::radius_from_zero>> &mass_moments)
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
		return mass * specific_heat_capacity * temperature;	
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

	float voltage(float current, float resistance)
	{
		return current * resistance;
	}

	float current(float voltage, float resistance)
	{
		return voltage / resistance;
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

	float speed_from_velocity_vec_2(vec_2 velocity)
	{
		return vec_2_length(velocity);
	}

	float speed_from_velocity_vec_3(float velocity_x, float velocity_y, float velocity_z)
	{
		return sqrtf(velocity_x * velocity_x + velocity_y * velocity_y + velocity_z * velocity_z);
	}

	float speed_from_velocity_vec_3(vec_3 velocity)
	{
		return vec_3_length(velocity);
	}

	float momentum_from_velocity_vec_2(float mass, vec_2 velocity)
	{
		return mass * sqrtf(velocity.x * velocity.x + velocity.y * velocity.y);
	}

	float momentum_from_velocity_vec_3(float mass, vec_3 velocity)
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

	float charge(float voltage, float time)
	{
		return voltage * time;
	}

	float electric_energy(float voltage, float current, float time)
	{
		return voltage * current * time;
	}

	float electric_energy(float voltage, float charge)
	{
		return voltage * charge;
	}

	float electric_power(float voltage, float current)
	{
		return voltage * current;
	}
}
