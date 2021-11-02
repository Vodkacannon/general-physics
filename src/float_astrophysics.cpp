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
}
