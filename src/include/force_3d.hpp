#include "double_types.hpp"
#include "vec_3d.hpp"

namespace general_physics {
    struct force_3d {
        double mass;
        struct vec_3d acceleration;
    };
}