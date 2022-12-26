#include "include/constants.hpp"
#include "float_thermodynamics.hpp"

namespace general_physics
{
	float celcius_to_kelvin(float celcius)
	{
		return celcius + 273.5;
	}

	float kelvin_to_celcius(float kelvin)
	{
		return kelvin - 273.5;
	}
	
	float boltzman_entropy(unsigned int multiplicity)
	{
		return BOLTZMANS_CONSTANT * logf(multiplicity);
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
		return (3.0f / 2.0f) * BOLTZMANS_CONSTANT * gas_temperature;
	}
	
	float spectral_radiance(float electromagnetic_frequency, float absolute_temperature)
	{
		float first_half = (((2.0f * PLANCKS_CONSTANT * electromagnetic_frequency * electromagnetic_frequency * electromagnetic_frequency) / (SPEED_OF_LIGHT * SPEED_OF_LIGHT)));
		float second_half = (1.0f / expf(PLANCKS_CONSTANT * electromagnetic_frequency / BOLTZMANS_CONSTANT * absolute_temperature) - 1.0f);
		return first_half * second_half;
	}
	
	float total_power_radiated(float body_area, float emissivity, float body_temperature)
    {
        return body_area * emissivity * STEFAN_BOLTZMAN_CONSTANT * powf(body_temperature, 4.0f);
    }

	float total_power_radiated(float body_area, float emissivity, float body_temperature, float ambient_temperature)
	{
		return body_area * emissivity * STEFAN_BOLTZMAN_CONSTANT * (powf(body_temperature, 4.0f) - powf(ambient_temperature, 4.0f));
	}
}
