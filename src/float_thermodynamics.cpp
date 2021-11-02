namespace simple_physics
{
  float pendulum_potential_energy(float mass, float gravitational_acceleration, float pendulum_length, float angle)
	{
		return mass * gravitational_acceleration * pendulum_length * (1 - cos(angle));
	}
	
	float boltzman_entropy(unsigned int multiplicity)
	{
		return BOLTZMANS_CONSTANT * log(multiplicity);
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
	
	float efficiency(float energy_out, float energy_in)
	{
		return energy_out / energy_in;
	}

	float ideal_gas_pressure(unsigned int moles, float temperature, float volume)
	{
		return (moles * IDEAL_GAS_CONSTANT * temperature) / volume;
	}

	float average_kinetic_energy_of_ideal_gas(float gas_temperature)
	{
		return (3 / 2) * BOLTZMANS_CONSTANT * gas_temperature;
	}
	
	float spectral_radiance(float electromagnetic_frequency, float absolute_temperature)
	{
		float first_half = (((2 * PLANCKS_CONSTANT * electromagnetic_frequency * electromagnetic_frequency * electromagnetic_frequency) / (simple_physics::SPEED_OF_LIGHT * simple_physics::SPEED_OF_LIGHT)));
		float second_half = (1 / expf(PLANCKS_CONSTANT * electromagnetic_frequency / BOLTZMANS_CONSTANT * absolute_temperature) - 1);
		return first_half * second_half;
	}
	
	float total_power_radiated(float body_area, float emissivity, float body_temperature)
        {
                return body_area * emissivity * STEFAN_BOLTZMAN_CONSTANT * powf(body_temperature, 4);
        }
}
