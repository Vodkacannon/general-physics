namespace simple_physics
{
    float integrate_jerk_to_acceleration(float jerk, float delta_time);
    float integrate_acceleration_to_velocity(float acceleration, float delta_time);
    float integrate_velocity_to_position(float velocity, float delta_time);
    float integrate_jerk_to_position(float jerk, float delta_time);
    float integrate_acceleration_to_position(float acceleration, float delta_time);
	float is_total_energy_zero(float kinetic_energy, float potential_energy, float floating_point_tolerance);
}
