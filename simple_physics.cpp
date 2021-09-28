#include "simple_physics.h"

inline float force(float mass, float acceleration)
{
  return mass * acceleration;
}

inline float velocity(float displacement, float time)
{
  return displacement / time;
}
