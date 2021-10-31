namespace simple_physics
{
        float prompt_neutron_mean_free_path(float nuclear_number_density, float total_interaction_cross_section)
        {
                return 1 / (nuclear_number_density * total_interaction_cross_section);
        }
        
        float prompt_criticality_reaction_growth_rate(float initial_growth_rate, neutron_time_to_cause_fission)
        {
        }
}
