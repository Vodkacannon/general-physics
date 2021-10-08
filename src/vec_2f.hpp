#include "vec_2f.hpp"

namespace simple_physics
{
  vec_2f::vec_2f(float x, float y)
  {
    return {x, y};
  }
  
  vec_2f::add(const vec2f& vector_1, const vec2f& vector_2)
  {
    return {vector_1.x + vector_2.x, vector_2.x + vector_2.y};
  }
}
