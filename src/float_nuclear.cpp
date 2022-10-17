#pragma once

#include <iostream>
#include <math.h>

namespace simple_physics
{
        float s_factor(float energy, float cross_section_of_energy, float sommerfeld_parameter)
        {
                return (energy * cross_section_of_energy) / expf(-2.0f * M_PI * cross_section); 
        }
        
        float excess_mass(float total_rest_mass_of_fission_products, float mass_of_origional_fuel_nucleus)
        {
                return total_rest_mass_of_fission_products * mass_of_origional_fuel_nucleus;
        }
        
        float prompt_neutron_mean_free_path(float nuclear_number_density, float total_interaction_cross_section)
        {
                return 1.0f / (nuclear_number_density * total_interaction_cross_section);
        }
        
        //This may be a closely guarded secret.
        float prompt_criticality_reaction_growth_rate(float initial_growth_rate, float neutron_time_to_cause_fission)
        {
                std::cout << "prompt_criticality_reaction_growth_rate() is unknown." << std::endl;
                return 0.0f;
        }
        
        float mass_difference_of_nucleus(float atomic_number, float mass_number, float nucleus_mass)
        {
                return atomic_number * simple_physics::PROTON_MASS + (mass_number - atomic_number) * simple_physics::NEUTRON_MASS - nucleus_mass;
        }

        float neutron_flux(float neutron_density, float neutron_velocity)
        {
                return neutron_density * neutron_velocity;
        }
             
        float half_life(float decay_constant) 
        {
             return logf(2.0f) / decay_constant; 
        }
        
        float radiation_particles_remaining(float decay_constant, float radiation_particles_time_0, float current_time) 
        {
                return radiation_particles_time_0 * expf(decay_constant * current_time);
        }
}
