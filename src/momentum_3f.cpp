#include "float_types.hpp"
#include "vec_3f.hpp"

namespace simple_physics
{
    momentum_3f momentum_3f::sum(const momentum_3f &momentum_1, const momentum_3f &momentum_2) {
        momentum_3f sum_momentum;

        sum_momentum.mass += momentum_1.mass + momentum_2.mass;

        sum_momentum.acceleration.x = momentum_1.acceleration.x + momentum_2.acceleration.x;
        sum_momentum.acceleration.y = momentum_1.acceleration.y + momentum_2.acceleration.y;
        sum_momentum.acceleration.z = momentum_1.acceleration.z + momentum_2.acceleration.z;

        return sum_momentum;
    }
};
