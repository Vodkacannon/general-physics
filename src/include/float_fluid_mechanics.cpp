namespace general_physics
{
        float bouyant_force(float fluid_density, float body_immersion_volume, float gravitational_acceleration) 
        {
	        return fluid_density * body_immersion_volume * gravitational_acceleration;
        }

        float bouyant_weight(float fluid_density, float body_immersion_volume, float gravitational_acceleration, float actual_weight)
        {
	        return actual_weight - bouyant_force(fluid_density, body_immersion_volume, gravitational_acceleration);
        }
}
