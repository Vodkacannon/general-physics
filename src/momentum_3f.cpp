#include "float_types.hpp"
#include "vec_3f.hpp"

namespace simple_physics {
    struct momentum_3f {
        float mass;
        vec_3f velocity;
    };
}