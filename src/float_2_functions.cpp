#include "simple_physics.h"

namespace simple_physics
{
  float speed_2f(float2 distance, float time)
	{
		return float2(distance.x / time, distance.y / time);
	}
};
