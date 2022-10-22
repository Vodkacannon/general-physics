#include "include/constants.hpp"

namespace general_physics
{
	double maluses_law(double initial_intensity, double angle_between_polarizer_and_initial_polarization_direction)
	{
		return initial_intensity * cos(angle_between_polarizer_and_initial_polarization_direction) * cos(angle_between_polarizer_and_initial_polarization_direction);
	}
	
	double rayleigh_criterion(double light_wavelength, double lens_aperture_diameter)
	{
		return RAYLEIGHS_CRITERION_CONSTANT * (light_wavelength / lens_aperture_diameter);
	}
	
	double lateral_resolution(double light_wavelength, double half_angle_of_light, double index_of_refraction)
	{
		return (RAYLEIGHS_CRITERION_CONSTANT * light_wavelength) / (2 * index_of_refraction * sin(half_angle_of_light));
	}
									    
	double luminosity_distance(double luminosity, double redshift, double angular_diameter_distance)
	{
		return luminosity / (4 * M_PI * (1 + redshift) * (1 + redshift) * angular_diameter_distance); 	
	}
}
