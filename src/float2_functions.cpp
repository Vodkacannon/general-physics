#include "simple_physics.h"

namespace simple_physics
{
	float vec_2f_speed(const vec2f distance, const float time)
	{
		return float2(distance.x / time, distance.y / time);
	}
	
	float vec_2f_distance(const vec2f speed, const float time)
	{
		return vec2f(speed.x / time, speed.y / time, speed.z / time);
	}
	
	float vec_2f_time(const vec2f distance, const vec2f velocity)
	{
		return vec2f(distance.x / velocity.x, distance.y / velocity.y);
	}
};
