#include "simple_physics.h"

namespace simple_physics
{
	float vec_2f_speed(vec2f distance, float time)
	{
		return float2(distance.x / time, distance.y / time);
	}
	
	float vec_2f_distance(vec2f speed, float time)
	{
		return vec2f(speed.x / time, speed.y / time, speed.z / time);
	}
	
	float vec_2f_time(vec2f distance)
	{
		
	}
};
