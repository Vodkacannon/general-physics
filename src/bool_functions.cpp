#include "include/float_types.hpp"
#include "include/float_misc.hpp"

namespace general_physics
{
	bool is_net_momentum_zero(const std::vector<std::pair<float_types::mass, float_types::velocity>> &momenta)
	{
		if(sum_of_momenta(momenta) == 0)
		{
			return true;
		}

		return false;
	}
	
	bool is_net_force_zero(const std::vector<std::pair<float_types::mass, float_types::acceleration>> &forces)
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
