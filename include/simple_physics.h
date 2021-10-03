//SimplePhys: A verbose C++ physics library.
//All units are SI.

#include <math.h>
#include <numeric>
#include <utility>
#include <string>
#include <algorithm>
#include <vector>

namespace simple_phys
{
	namespace types
	{
		typedef float mass;
		typedef float radius_from_zero;
		typedef float velocity;
		typedef float acceleration;
	};

	const float NEWTONS_GRAVITATIONAL_CONSTANT = 6.67430e-11;
	const float SPEED_OF_LIGHT = 299792458;
	const float EARTHS_GRAVITATIONAL_CONSTANT = 9.80665;
	const float COULOMBS_CONSTANT = 8.9875517923e9;
	const float PLANCKS_CONSTANT = 6.62607004e-34;
	const float REDUCED_PLANCKS_CONSTANT = PLANCKS_CONSTANT / (2 * M_PI);
	const float BOLTZMANS_CONSTANT = 1.38064852e-23;
	const float IDEAL_GAS_CONSTANT = 8.31446261815324;

	struct vec_2
	{
		float x;
		float y;
	};

	float vec_2_length(vec_2 my_vec)
	{
		return sqrt(my_vec.x * my_vec.x + my_vec.y * my_vec.y);
	}

	struct vec_3
	{
		float x;
		float y;
		float z;
	};

	float vec_3_length(vec_3 my_vec)
	{
		return sqrt(my_vec.x * my_vec.x + my_vec.y * my_vec.y + my_vec.z * my_vec.z);
	}

	typedef vec_3 velocity_3;
	typedef vec_3 acceleration_3;

	struct momentum_3
	{
		types::mass mass;
		velocity_3 velocity;
	};

	struct force_3
	{
		types::mass mass;
		acceleration_3 acceleration;
	};

	struct kinetic_energy_3
	{
		types::mass mass;
		velocity_3 velocity;
	};
}
