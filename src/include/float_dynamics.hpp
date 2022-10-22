namespace general_physics
{
	float momentum(float mass, float velocity);
	
	float force(float mass, float acceleration);
	
	float force(float mass, float displacement_2, float displacement_1, float time_2, float time_1);

	float pressure(float force, float area);
	
	float density(float mass, float volume);
	
	float impulse(float force, float time);
	
	float work(float force, float distance);
	
	float dry_friction(float coefficient_of_friction, float normal_force);
	
	float power(float energy, float time);
	
	float power(float force, float velocity, float applied_angle);
	
	float drag_force(float air_density, float velocity, float drag_coefficient, float cross_sectional_area);

	float classical_kinetic_energy(float mass, float velocity);
	
	float gravitational_potential_energy(float mass, float gravitational_acceleration, float height);

	float elastic_potential_energy(const float spring_constant, float displacement);
	
	float reynolds_number(float flow_speed, float characteristic_linear_dimension_as_length, float kinematic_viscosity);

	float reynolds_number(float fluid_density, float flow_speed, float characteristic_linear_dimension_as_length, float dynamic_viscosity);
	
	float drag_coefficient(float wet_area, float front_area, float bejan_number, double reynolds_number);

	float ballistic_coefficient(float mass, float drag_coefficient, float cross_sectional_area);
}