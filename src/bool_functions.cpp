namespace simple_physics
{
	bool are_forces_in_equilibrium(const std::vector<std::pair<float_types::mass, float_types::acceleration>> &forces)
	{
		if(sum_of_forces(forces) == 0)
		{
			return true;
		}

		return false;
	}
	
	bool is_total_energy_zero(float kinetic_energy, float potential_energy, float floating_point_tolerance)
	{
		if(fabs(kinetic_energy + potential_energy) <= floating_point_tolerance)
		{
			return true;
		}
		
		return false;
	}
}
