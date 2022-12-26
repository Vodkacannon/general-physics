#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "include/constants.hpp"

namespace general_physics
{
    float sommerfeld_parameter(float z_1, float z_2, float e, float relative_incident_velocity);
   
    float s_factor(float energy, float energy_cross_section, float sommerfeld_parameter);
    
    float total_interaction_cross_section(float s_factor, float sommerfeld_parameter);
    
    float gamow_factor(float z_1, float z_2, float e, float relative_incident_velocity);
    
    float excess_mass(float total_rest_mass_of_fission_products, float mass_of_origional_fuel_nucleus);
     
    float prompt_neutron_mean_free_path(float nuclear_number_density, float total_interaction_cross_section);
    
    //This may be a closely guarded secret.
    float prompt_criticality_reaction_growth_rate(float initial_growth_rate, float neutron_time_to_cause_fission);
    
    float mass_difference_of_nucleus(float atomic_number, float mass_number, float nucleus_mass);
   
    float neutron_flux(float neutron_density, float neutron_velocity);
         
    float half_life(float decay_constant);
    
    float radiation_particles_remaining(float decay_constant, float radiation_particles_time_0, float current_time);
}