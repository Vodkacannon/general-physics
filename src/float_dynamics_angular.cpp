namespace simple_physics
{
  float period_of_spring_with_mass(float mass, float spring_constant)
	{
		2 * M_PI * sqrtf(mass / spring_constant);
	}
}
