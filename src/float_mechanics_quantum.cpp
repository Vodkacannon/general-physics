#pragma once

#include "include/constants.hpp"

namespace general_physics
{
	float photon_energy(float frequency)
	{
		return PLANCKS_CONSTANT * frequency;
	}

	float photon_momentum(float wavelength)
	{
		return PLANCKS_CONSTANT * wavelength;
	}

	float heisenberg_momentum_uncertainty(float max_position, float min_position)
	{
		return REDUCED_PLANCKS_CONSTANT / (2 * (max_position - min_position));
	}

	float heisenberg_position_uncertainty(float max_momentum, float min_momentum)
	{
		return REDUCED_PLANCKS_CONSTANT / (2 * (max_momentum - min_momentum));
	}  
}
