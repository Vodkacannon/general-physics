#include "../include/constants.hpp"

namespace simple_physics
{
	float voltage(float current, float resistance)
	{
		return current * resistance;
	}

	float current(float voltage, float resistance)
	{
		return voltage / resistance;
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
	
	float electric_power_2(float current, float resistance)
	{
		return current * resistance * resistance;
	}
  
  	float capacitor_energy(float quantity_of_charge_separated, float applied_potential_difference)
  	{
    		return (1 / 2) * (quantity_of_charge_separated * quantity_of_charge_separated) / applied_potential_difference;
  	}
	
	float electric_flux(float total_charge_in_volume)
	{
		return total_charge_in_volume / VACUUM_PERMITTIVITY_CONSTANT;
	}
	
	float coulombs_force(float charge_1, float charge_2, float distance_between_charges)
	{
		return (COULOMBS_CONSTANT * charge_1 * charge_2) / (distance_between_charges * distance_between_charges);
	}
}
