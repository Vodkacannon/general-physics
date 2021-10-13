#include "simple_physics.h"

namespace simple_physics
{
	float vec_2f_speed(const vec2f& distance, const float time)
	{
		return float2(abs(distance.x / time), abs(distance.y / time));
	}
	
	float vec_2f_distance(const vec2f& speed, const float time)
	{
		return vec2f(abs(speed.x / time), abs(speed.y / time), abs(speed.z / time));
	}
	
	float vec_2f_time(const vec2f& distance, const vec2f velocity)
	{
		return vec2f(distance.x / velocity.x, distance.y / velocity.y);
	}
	
	float vec_2f_power(const vec2f& force, float displacement)
	{
		return vec2f(force.x * distance, force.y * distance, force.z * distance);
	}
};
