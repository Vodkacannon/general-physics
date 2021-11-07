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
	
	float keplers_second_law(float major_axis, float minor_axis, float orbital_period)
	{
		return  (a  * b * orbital_period) / 2;
	}
	
	float keplers_third_law(float semi__major_axis, float mass_of_obrbited_body)
	{
		2 * M_PI * sqrtf(powf(semi__major_axis, 3) / (NEWTONS_GRAVITY_CONSTANT * mass_of_orbited_body));
	}
	
	float keplers_equation(float eccentric_anomaly, float eccentricity)
	{
		return eccentric_anomaly - eccentricity * sinf(eccentric_animaly);
	}
}
