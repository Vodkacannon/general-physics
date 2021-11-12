namespace simple_physics
{
	float orbital_period(float mass_of_orbited_body)
	{
		return (4 * M_PI * M_PI) / (NEWTONS_GRAVITATIONAL_CONSTANT * mass_of_orbited_body);
	}
	
	float rocket_delta_velocity(float specific_impulse, float gravitational_acceleration, float initial_mass, float final_mass)
	{
		return specific_impulse * gravitational_acceleration * log(initial_mass / final_mass);
	}
	
	float newtons_gravitational_force(float mass_1, float mass_2, float radius_between_masses)
	{
		return NEWTONS_GRAVITATIONAL_CONSTANT * mass_1 * mass_2 / (radius_between_masses * radius_between_masses);
	}

	float escape_speed(float mass, float radius)
	{
		return sqrtf((2 * NEWTONS_GRAVITATIONAL_CONSTANT * mass) / radius);
	}
	
	float galaxy_rotation_velocity(float dummy)
	{
		return dummy;
	}
}
