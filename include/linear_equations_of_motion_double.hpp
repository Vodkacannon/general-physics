namespace simple_physics
{
	double speed(double distance, double time);
	double velocity(double displacement, double time);
	double displacement(double velocity, double time);
	double distance(double speed, double time);
	double time(double distance, double velocity);
	double displacement_2(double velocity_1, double time, double acceleration);
	double displacement_3(double velocity_1, double velocity_2, double acceleration);
	double displacement_4(double velocity_1, double velocity_2, double time);
	double acceleration(double velocity_2, double velocity_1, double time_2, double time_1);
}
