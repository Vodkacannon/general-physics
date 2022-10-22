#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

namespace general_physics 
{
    const double NEWTON_GRAVITATIONAL_CONSTANT = 6.67430e-11;
    const double SPEED_OF_LIGHT = 299792458;
    const double EARTHS_GRAVITATIONAL_CONSTANT = 9.80665;
    const double COULOMBS_CONSTANT = 8.9875517923e9;
    const double PLANCKS_CONSTANT = 6.62607004e-34;
    const double REDUCED_PLANCKS_CONSTANT(PLANCKS_CONSTANT / (2.0f * M_PI));
    const double BOLTZMANS_CONSTANT = 1.38064852e-23;
    const double IDEAL_GAS_CONSTANT = 8.31446261815324;
    const double RAYLEIGHS_CRITERION_CONSTANT = 1.21966989;
    const double VACUUM_PERMITTIVITY_CONSTANT = 8.8541878128e-12;
    const double STEFAN_BOLTZMAN_CONSTANT = 5.670374419e-8;
    const double MOND_TRANSITION_CONSTANT = 1.2e-10;
    const double PROTON_MASS = 1.67262192369e-27;
    const double NEUTRON_MASS = 1.67492749804e-27;
};
