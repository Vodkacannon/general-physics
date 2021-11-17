#pragma once

#include <math.h>

namespace simple_physics
{
        float s_factor(float energy, float cross_section_of_energy, float sommerfeld_parameter)
        {
                return (energy * cross_section_of_energy) / expf(-2 * M_PI * cross_section); 
        }
        
        float excess_mass(float total_rest_mass_of_fission_products, float mass_of_origional_fuel_nucleus)
        {
                return total_rest_mass_of_fission_products * mass_of_origional_fuel_nucleus;
        }
        
        float prompt_neutron_mean_free_path(float nuclear_number_density, float total_interaction_cross_section)
        {
                return 1 / (nuclear_number_density * total_interaction_cross_section);
        }
        
        float prompt_criticality_reaction_growth_rate(float initial_growth_rate, neutron_time_to_cause_fission)
        {
        }
        
        float mass_difference_of_nucleus(float atomic_number, float mass_number, float nucleus_mass)
        {
                return atomic_number * simple_physics::PROTON_MASS + (mass_number - atomic_number) * simple_physics::NEUTRON_MASS - nucleus_mass;
        }
}
