#include <iostream>
#include "include/general_physics.hpp"

int main()
{
    namespace gp = general_physics;
    
    std::cout << gp::density(10.0, 5.0);
    return 0;
}
