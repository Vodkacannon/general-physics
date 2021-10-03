//SimplePhys: A verbose C++ physics library.
//All units are SI.
#pragma once

#include <math.h>
#include <numeric>
#include <utility>
#include <string>
#include <algorithm>
#include <vector>

namespace simple_phys
{
	const float NEWTONS_GRAVITATIONAL_CONSTANT = 6.67430e-11;
	const float SPEED_OF_LIGHT = 299792458;
	const float EARTHS_GRAVITATIONAL_CONSTANT = 9.80665;
	const float COULOMBS_CONSTANT = 8.9875517923e9;
	const float PLANCKS_CONSTANT = 6.62607004e-34;
	const float REDUCED_PLANCKS_CONSTANT = PLANCKS_CONSTANT / (2 * M_PI);
	const float BOLTZMANS_CONSTANT = 1.38064852e-23;

	typedef float mass;
	typedef float acceleration;
	typedef float radius_from_center;
	

	struct vec_2
	{
		float x;
		float y;
	};

	struct vec_3
	{
		float x;
		float y;
		float z;
	};

	typedef vec_3 velocity_3;
	typedef vec_3 acceleration_3;

	struct momentum_3
	{
		mass mass;
		velocity_3 velocity;
	};

	struct force_3
	{
		mass mass;
		acceleration_3 acceleration;
	};

	struct kinetic_energy_3
	{
		mass mass;
		velocity_3 velocity;
	};
}
