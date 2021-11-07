#include "include/constants.hpp"

namespace simple_physics
{
	double voltage(double current, double resistance)
	{
		return current * resistance;
	}

	double current(double voltage, double resistance)
	{
		return voltage / resistance;
	}
	
  	double charge(double voltage, double time)
	{
		return voltage * time;
	}

	double electric_energy(double voltage, double current, double time)
	{
		return voltage * current * time;
	}

	double electric_energy(double voltage, double charge)
	{
		return voltage * charge;
	}

	double electric_power(double voltage, double current)
	{
		return voltage * current;
	}
	
	double electric_power_2(double current, double resistance)
	{
		return current * resistance * resistance;
	}
  
  	double capacitor_energy(double quantity_of_charge_separated, double applied_potential_difference)
  	{
    		return (1 / 2) * (quantity_of_charge_separated * quantity_of_charge_separated) / applied_potential_difference;
  	}
	
	double electric_flux(double total_charge_in_volume)
	{
		return total_charge_in_volume / VACUUM_PERMITTIVITY_CONSTANT;
	}
	
	double coulombs_force(double charge_1, double charge_2, double distance_between_charges)
	{
		return (COULOMBS_CONSTANT * charge_1 * charge_2) / (distance_between_charges * distance_between_charges);
	}
}
