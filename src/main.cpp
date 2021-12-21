#include <iostream>
#include "include/simple_physics.hpp"

int main()
{
    namespace sp = simple_physics;
    
    std::cout << sp::density(10.0, 5.0);
    return 0;
}
