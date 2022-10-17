#pragma once

#include <cmath>

namespace simple_physics
{
        double s_factor(double energy, double cross_section_of_energy, double sommerfeld_parameter)
        {
                return (energy * cross_section_of_energy) / exp(-2.0 * M_PI * cross_section); 
        }
        
        double excess_mass(double total_rest_mass_of_fission_products, double mass_of_origional_fuel_nucleus)
        {
                return total_rest_mass_of_fission_products * mass_of_origional_fuel_nucleus;
        }
        
        double prompt_neutron_mean_free_path(double nuclear_number_density, double total_interaction_cross_section)
        {
                return 1.0 / (nuclear_number_density * total_interaction_cross_section);
        }
        
        //This may be a closely guarded secret.
        double prompt_criticality_reaction_growth_rate(double initial_growth_rate, double neutron_time_to_cause_fission)
        {
                return 0;
        }
        
        double mass_difference_of_nucleus(double atomic_number, double mass_number, float nucleus_mass)
        {
                return atomic_number * simple_physics::PROTON_MASS + (mass_number - atomic_number) * simple_physics::NEUTRON_MASS - nucleus_mass;
        }

        double neutron_flux(float neutron_density, double neutron_velocity)
        {
                return neutron_density * neutron_velocity;
        }
             
        double half_life(float decay_constant) 
        {
             return log(2.0) / decay_constant; 
        }
        
        double radiation_particles_remaining(double decay_constant, double radiation_particles_time_0, double current_time) 
        {
                return radiation_particles_time_0 * exp(decay_constant * current_time);
        }
}
