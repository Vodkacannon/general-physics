namespace simple_physics
{
    bool are_forces_in_equilibrium(const std::vector<std::pair<float_types::mass, float_types::acceleration>> &forces)
    {
		if(sum_of_forces(forces) == 0)
		{
			return true;
		}

		return false;
	}
}
