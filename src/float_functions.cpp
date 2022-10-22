//simple-physics: A verbose C++ physics library.
//Functions with fabs() in them are scalar.

#include <math.h>
#include "include/float_types.hpp"
#include "include/constants.hpp"
#include "include/vec_2f.hpp"
#include "include/vec_3f.hpp"

namespace general_physics
{	
	float speed_from_velocity_vec_2(float velocity_x, float velocity_y)
	{
		return sqrtf(velocity_x * velocity_x + velocity_y * velocity_y);
	}

	float momentum_from_velocity_vec_2(float mass, const vec_2f& velocity)
	{
		return mass * sqrtf(velocity.x * velocity.x + velocity.y * velocity.y);
	}

	float momentum_from_velocity_vec_3(float mass, const vec_3f& velocity)
	{
		return mass * sqrtf(velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z);
	}
}
