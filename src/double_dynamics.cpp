namespace simple_physics
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
}
