namespace simple_physics
{
        float prompt_neutron_mean_free_path(float nuclear_number_density, float total_interaction_cross_section)
        {
                return 1 / (nuclear_number_density * total_interaction_cross_section);
        }
}
