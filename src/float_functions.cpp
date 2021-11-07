//simple-physics: A verbose C++ physics library.
//Functions with fabs() in them are scalar.

#include <math.h>
#include "include/float_types.hpp"
#include "include/constants.hpp"

namespace simple_physics
{	
	float sum_of_momenta(const std::vector<std::pair<mass, velocity>> &momenta)
	{
		float sum_of_momenta = 0.0;
		
		for(const auto& momentum : momenta)
		{
			sum_of_momenta += momentum.first * momentum.second;
		}

		return sum_of_momenta;
	}

	float sum_of_forces(const std::vector<std::pair<mass, acceleration>> &forces)
	{
		float sum_of_forces = 0.0;
		
		for(const auto& force : forces)
		{
			sum_of_forces += force.first * force.second;
		}

		return sum_of_forces;
	}

	float center_of_mass(const std::vector<std::pair<float_types::mass, float_types::radius_from_zero>> &mass_moments)
	{
		float sum_of_masses = 0.0;
		float mass_moment_sum = 0.0;
		unsigned int mass_moments_size = mass_moments.size();

		for(unsigned int i = 0; i < mass_moments_size; i++)
		{
			mass_moment_sum += mass_moments[i].first * mass_moments[i].second;
			sum_of_masses += mass_moments[i].first;
		}

		return mass_moment_sum / sum_of_masses;
	}

	

	float speed_from_velocity_vec_2(float velocity_x, float velocity_y)
	{
		return sqrt(velocity_x * velocity_x + velocity_y * velocity_y);
	}

	float momentum_from_velocity_vec_2(float mass, const vec_2& velocity)
	{
		return mass * sqrtf(velocity.x * velocity.x + velocity.y * velocity.y);
	}

	float momentum_from_velocity_vec_3(float mass, const vec_3& velocity)
	{
		return mass * sqrtf(velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z);
	}
	
	float period_of_spring_with_mass(float mass, float spring_constant)
	{
		2 * M_PI * sqrtf(mass / spring_constant);
	}
	
	float keplers_second_law(float major_axis, float minor_axis, float orbital_period)
	{
		return  (a  * b * orbital_period) / 2;
	}
	
	float keplers_third_law(float semi__major_axis, float mass_of_obrbited_body)
	{
		2 * M_PI * sqrtf(powf(semi__major_axis, 3) / (NEWTONS_GRAVITY_CONSTANT * mass_of_orbited_body));
	}
	
	float keplers_equation(float eccentric_anomaly, float eccentricity)
	{
		return eccentric_anomaly - eccentricity * sinf(eccentric_animaly);
	}
}
