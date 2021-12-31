#include "float_types.hpp"
#include "vec_3f.hpp"

namespace general_physics {
    struct force_3f {
        float mass;
        vec_3f acceleration;
    };
}
