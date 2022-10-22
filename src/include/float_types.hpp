//simple-phys: A verbose C++ physics library.
//All units are SI.

#pragma once

#include <math.h>
#include <vector>

namespace general_physics
{
	namespace float_types
	{
		typedef float mass;
		typedef float radius_from_zero;
		typedef float velocity;
		typedef float acceleration;
	};

	struct kinetic_energy_3f
	{
        float_types::mass mass;
		struct vec_3f* velocity;
	};
}
