#include <cmath>

namespace general_physics
{
    double momentum(double mass, double velocity)
    {
        return mass * velocity;
    }

    double force(double mass, double acceleration)
    {
        return mass * acceleration;
    }

    double pressure(double force, double area)
    {
        return force / area;
    }
	
    double density(double mass, double volume)
    {
        return mass / volume;
    }

	double impulse(double force, double time)
	{
    	return force * time;
	}

	double work(double force, double distance)
	{
    	return force * distance;
	}
	
	double dry_friction(double coefficient_of_friction, double normal_force)
	{
		return coefficient_of_friction * normal_force;
	}
	
	double power(double energy, double time)
	{
		return energy / time;
	}
	
	double power(double force, double velocity, double applied_angle)
	{
		return force * velocity * cosf(applied_angle);
	}

	double drag_force(double air_density, double velocity, double drag_coefficient, double cross_sectional_area)
	{
		return 0.5 * air_density * velocity * velocity * drag_coefficient * cross_sectional_area;
	}
	
	double classical_kinetic_energy(double mass, double velocity)
	{
		return 0.5 * mass * velocity * velocity;
	}

	double gravitational_potential_energy(double mass, double gravitational_acceleration, double height)
	{
		return mass * gravitational_acceleration * height;
	}

	double elastic_potential_energy(const double spring_constant, double displacement)
	{
		return 0.5 * spring_constant * displacement * displacement;
	}
	
	double reynolds_number(double flow_speed, double characteristic_linear_dimension_as_length, double kinematic_viscosity)
	{
		return (flow_speed * characteristic_linear_dimension_as_length) / kinematic_viscosity;
	}

	double reynolds_number(double fluid_density, double flow_speed, double characteristic_linear_dimension_as_length, double dynamic_viscosity)
	{
		return (fluid_density * flow_speed * characteristic_linear_dimension_as_length) / dynamic_viscosity;
	}

	double drag_coefficient(double wet_area, double front_area, double bejan_number, double reynolds_number)
	{
		return 2.0 * (wet_area / front_area) * (bejan_number / (reynolds_number * reynolds_number));
	}

	double ballistic_coefficient(double mass, double drag_coefficient, double cross_sectional_area)
	{
		return (mass * drag_coefficient) / cross_sectional_area;
	}
}
