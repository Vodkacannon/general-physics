namespace simple_physics
{
    float speed(float distance, float time);
	float velocity(float displacement, float time);
	float displacement(float velocity, float time);
	float distance(float speed, float time);
	float time(float distance, float velocity);
	float displacement_2(float velocity_1, float time, float acceleration);
	float displacement_3(float velocity_1, float velocity_2, float acceleration);
	float displacement_4(float velocity_1, float velocity_2, float time);
	float acceleration(float velocity_2, float velocity_1, float time_2, float time_1);
};
