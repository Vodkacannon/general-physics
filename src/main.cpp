#include <iostream>
#include "include/general_physics.hpp"

/*
* Project: general-physics.
* Author: Armend Veseli.
* Description: A wide range of physics equations in SI units.
*/

int main()
{
    namespace gpf = general_physics;
    
    std::cout << gp::acceleration(5.0, 2.0, 3.0, 1.0) << "\n";
    std::cout << gp::stellar_dynamical_time_scale(1000.0f, 500.0f) << "\n";
    std::cout << gp::casimir_plates_force(1.5, 0.0001) << "\n";
    std::cout << gp::displacement(-5, 5) << "\n";
    std::cout << gp::integrate_velocity_to_position(10.0, 1.0 / 60) << "\n";
    std::cout << gp::coulombs_force(0.05, 0.05, 0.5);
    return 0;
}
