#pragma once

namespace general_physics
{
	float celcius_to_kelvin(float celcius);

	float kelvin_to_celcius(float kelvin);

	float boltzman_entropy(unsigned int multiplicity);

	float heat_flow(float mass, float specific_heat_capacity, float temperature_change);

	float heat_flow(float mass, float specific_heat_2, float specific_heat_1, float temperature);

	float thermal_energy_transfer(float thermal_mass_of_body, float temperature_2, float temperature_1);

	float efficiency(float energy_out, float energy_in);

	float ideal_gas_pressure(unsigned int moles, float temperature, float volume);

	float average_kinetic_energy_of_ideal_gas(float gas_temperature);

	float spectral_radiance(float electromagnetic_frequency, float absolute_temperature);

	float total_power_radiated(float body_area, float emissivity, float body_temperature);
}