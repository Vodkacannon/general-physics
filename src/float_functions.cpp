//simple-physics: A verbose C++ physics library.
//Functions with fabs() in them are scalar.

#include <math.h>
#include "include/float_types.hpp"
#include "include/constants.hpp"

namespace simple_physics
{	
	float speed_from_velocity_vec_2(float velocity_x, float velocity_y)
	{
		return sqrt(velocity_x * velocity_x + velocity_y * velocity_y);
	}

	float momentum_from_velocity_vec_2(float mass, const vec_2& velocity)
	{
		return mass * sqrtf(velocity.x * velocity.x + velocity.y * velocity.y);
	}

	float momentum_from_velocity_vec_3(float mass, const vec_3& velocity)
	{
		return mass * sqrtf(velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z);
	}
	
	float period_of_spring_with_mass(float mass, float spring_constant)
	{
		2 * M_PI * sqrtf(mass / spring_constant);
	}
}
