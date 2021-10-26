#include "../include/float_types.hpp"
#include "../include/vec_3f.hpp"
#include "../include/momentum_3f.hpp"

namespace simple_physics
{
    momentum_3f momentum_3f::sum(const struct momentum_3f &momentum_1, const struct momentum_3f &momentum_2) {
        struct momentum_3f sum_momentum;

        sum_momentum.mass += momentum_1.mass + momentum_2.mass;

        sum_momentum.velocity.x = momentum_1.velocity.x + momentum_2.velocity.x;
        sum_momentum.velocity.y = momentum_1.velocity.y + momentum_2.velocity.y;
        sum_momentum.velocity.z = momentum_1.velocity.z + momentum_2.velocity.z;

        return sum_momentum;
    }
};
