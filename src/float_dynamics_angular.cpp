namespace simple_physics
{
	float period_of_spring_with_mass(float mass, float spring_constant)
	{
		2 * M_PI * sqrtf(mass / spring_constant);
	}
	
	float pendulum_potential_energy(float mass, float gravitational_acceleration, float pendulum_length, float angle)
	{
		return mass * gravitational_acceleration * pendulum_length * (1 - cos(angle));
	}
	
	float centripedal_force(float mass, float tangental_velocity, float radius)
	{
		return (mass * tangental_velocity * tangental_velocity) / radius;
	}
}
