#pragma once

namespace simple_physics
{
  	float wave_intensity(float power, float area)
	{
		return power / area;
	}
	float index_of_refraction(float speed_of_light_in_medium)
	{
		return SPEED_OF_LIGHT / speed_of_light_in_medium;
	}
	
	float wave_velocity(float frequency, float wavelength)
	{
		return frequency * wavelength;
	}
	float doppler_effect(float sound_wave_speed, float observer_velocity, float source_velocity, float origional_sound_wave_frequency)
	{
		return ((sound_wave_speed + observer_velocity) / (sound_wave_speed + source_velocity)) * origional_sound_wave_frequency;
	}
	
	float waves_per_second(float wave_velocity, float wave_width) 
	{
		return wave_velocity / wave_width;
	}
}
