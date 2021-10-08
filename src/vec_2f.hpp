#include "vec_2f.hpp"

namespace simple_physics
{
  vec_2f::vec_2f(float x, float y)
  {
    return {x, y};
  }
  
  vec2f::add(const vec2f& vector1, const vec2f& vector2)
  {
    return {vector1.x + vector2.x, vector2.x + vector2.y};
  }
}
