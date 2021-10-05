#include "force_3f.hpp"
namespace simple_physics {
    force_3f sum(const force_3f &force_1, const force_3f &force_2) {
        force_3f sum_force;

        sum_force.mass += force_1.mass + force_2.mass;

        sum_force.acceleration.x = force_1.acceleration.x + force_2.acceleration.x;
        sum_force.acceleration.y = force_1.acceleration.y + force_2.acceleration.y;
        sum_force.acceleration.z = force_1.acceleration.z + force_2.acceleration.z;

        return sum_force;
    }
}