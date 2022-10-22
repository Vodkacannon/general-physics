#include <cmath>
#include "include/vec_2f.hpp"

namespace general_physics
{
	vec_2f::vec_2f(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	vec_2f vec_2f_speed(const vec_2f& distance, const float time)
	{
		return vec_2f(fabs(distance.x / time), fabs(distance.y / time));
	}
	
	vec_2f vec_2f_distance(const vec_2f& speed, const float time)
	{
		return vec_2f(fabs(speed.x / time), fabs(speed.y / time));
	}

	//TODO.
	float vec_2f_time(const vec_2f& distance, const vec_2f& velocity)
	{
		return 0.0f; //return vec_2f(distance.x / velocity.x, distance.y / velocity.y);
	}
	
	vec_2f vec_2f_power(const vec_2f& force, float displacement)
	{
		return vec_2f(force.x * displacement, force.y * displacement);
	}
  
  	vec_2f add(const vec_2f& vector_1, const vec_2f& vector_2)
  	{
    		return vec_2f(vector_1.x + vector_2.x, vector_2.y + vector_2.y);
  	}
}
