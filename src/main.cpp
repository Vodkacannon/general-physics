#include <iostream>
#include "../include/simple_physics.hpp"

int main()
{
    namespace s_p = simple_physics;
    
    std::cout << s_p::density(10.0, 5.0);
    return 0;
}
