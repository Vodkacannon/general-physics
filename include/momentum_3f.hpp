#include "../include/vec_3f.hpp"

struct momentum_3f
{
  float mass;
  struct vec_3f velocity;
  momentum_3f sum(const momentum_3f &momentum_1, const momentum_3f &momentum_2);
};
