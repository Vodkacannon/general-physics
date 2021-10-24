namespace simple_physics
{
  capacitor_energy(float quantity_of_charge_separated, float applied_potential_difference)
  {
    return (1 / 2) * (quantity_of_charge_separated * quantity_of_charge_separated) / applied_potential_difference;
  }
}
