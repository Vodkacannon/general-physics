namespace simple_physics
{
	double integrate_jerk_to_acceleration(double jerk, double delta_time)
	{
		return jerk * delta_time;
	}
	
	double integrate_jerk_to_position(double jerk, double delta_time)
	{
		return integrate_velocity_to_position(integrate_acceleration_to_velocity(integrate_jerk_to_acceleration(jerk, delta_time), delta_time), delta_time);
	}
	
    double integrate_acceleration_to_velocity(double acceleration, double delta_time)
	{
		return acceleration * delta_time;
	}
	
	double integrate_acceleration_to_position(double acceleration, double delta_time)
	{
		return integrate_velocity_to_position(integrate_acceleration_to_velocity(acceleration, delta_time), delta_time);
	}
	
    double integrate_velocity_to_position(double velocity, double delta_time)
	{
		return velocity * delta_time;
	}
}
