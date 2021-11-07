namespace simple_physics
{
	float time(float frequency);
	float frequency(float time);
  	float centripedal_acceleration_from_tangental(float tangental_velocity, float radius);
	float centripedal_acceleration_from_angular(float angular_velocity, float radius);
	float centripedal_force(float mass, float tangental_velocity, float radius);
	float angular_velocity(float angle, float time);
	float angular_velocity(float angle_2, float angle_1, float time_2, float time_1);
	float angular_acceleration(float angular_velocity, float time);
	float angular_acceleration(float angular_velocity_2, float angular_velocity_1, float time_2, float time_1);
	float perpendicular_angular_momentum(float radius, float mass, float velocity, float perpendicular_angle);
	float torque(float radius, float force, float angle);
	float torque(float inertia, float angular_acceleration);
	float orbital_period(float velocity, float radius);
};
