namespace simple_physics
{
	float integrate_jerk_to_acceleration(float jerk, float delta_time)
	{
		return jerk * delta_time;
	}
	
	float integrate_jerk_to_position(float jerk, float delta_time)
	{
		return integrate_velocity_to_position(integrate_acceleration_to_velocity(integrate_jerk_to_acceleration(float jerk, float delta_time), float delta_time), delta_time);
	}
	
    float integrate_acceleration_to_velocity(float acceleration, float delta_time)
	{
		return acceleration * delta_time;
	}
	
	float integrate_acceleration_to_position(float acceleration, float delta_time)
	{
		return integrate_velocity_to_position(integrate_acceleration_to_velocity(float acceleration, float delta_time), float delta_time);
	}
	
    float integrate_velocity_to_position(float velocity, float delta_time)
	{
		return velocity * delta_time;
	}
};
