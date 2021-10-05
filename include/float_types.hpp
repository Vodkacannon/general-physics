//simple-phys: A verbose C++ physics library.
//All units are SI.

#pragma once

#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>
#include <vector>
#include "float_function_declarations.hpp"
#include "double_function_declarations.hpp"

namespace simple_physics
{
	namespace float_types
	{
		typedef float mass;
		typedef float radius_from_zero;
		typedef float velocity;
		typedef float acceleration;
	};
	
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
		float_types::mass mass;
		velocity_3 velocity;
	};

	struct force_3
	{
        float_types::mass mass;
		acceleration_3 acceleration;
	};

	struct kinetic_energy_3
	{
        float_types::mass mass;
		velocity_3 velocity;
	};
}
