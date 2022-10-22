#pragma once

#include "float_types.hpp"
#include "vec_3f.hpp"

namespace general_physics {
    struct force_3f {
        float mass;
        vec_3f acceleration;
        force_3f sum(const force_3f& force_1, const force_3f& force_2);
    };
}
