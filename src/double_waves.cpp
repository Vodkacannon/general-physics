#include "include/constants.hpp"

namespace general_physics
{
  	double wave_intensity(double power, double area)
	{
		return power / area;
	}
	double index_of_refraction(double speed_of_light_in_medium)
	{
		return SPEED_OF_LIGHT / speed_of_light_in_medium;
	}
	
	double wave_velocity(double frequency, double wavelength)
	{
		return frequency * wavelength;
	}
	double doppler_effect(double sound_wave_speed, double observer_velocity, double source_velocity, double origional_sound_wave_frequency)
	{
		return ((sound_wave_speed + observer_velocity) / (sound_wave_speed + source_velocity)) * origional_sound_wave_frequency;
	}
	
	double waves_per_second(double wave_velocity, double wave_width) 
	{
		return wave_velocity / wave_width;
	}
}
