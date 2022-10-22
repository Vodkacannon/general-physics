#pragma once

namespace general_physics
{
	double voltage(double current, double resistance);
	
	double current(double voltage, double resistance);
	
	double charge(double voltage, double time);
	
	double electric_energy(double voltage, double current, double time);
	
	double electric_energy(double voltage, double charge);
	
	double electric_power(double voltage, double current);
	
	double electric_power_2(double current, double resistance);
	
	double capacitor_energy(double quantity_of_charge_separated, double applied_potential_difference);
	
	double electric_flux(double total_charge_in_volume);
	
	double coulombs_force(double charge_1, double charge_2, double distance_between_charges);
}
