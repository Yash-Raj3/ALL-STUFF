#include <stdio.h>
int calculateFuel(int fuel, int consumption, int recharge, int solarBonus, int Currplanet, int totalPlanets)
{
    if (Currplanet > totalPlanets)
    {
        return 1;
    }
    if (fuel <= 0)
    {
        printf("Planet %d: Fuel Remaining = %d. Journey failed due to fuel exhaustion.\n", Currplanet, fuel);
        return 0;
    }
    int newfuel = fuel - consumption;
    newfuel += recharge;
    printf("Planet %d: Fuel Remaining = %d\n", Currplanet, newfuel);
    if (Currplanet % 4 == 0)
    {
        newfuel += solarBonus;
        printf("Solar Recharge activated at Planet %d! Gained %d fuel.\n", Currplanet, solarBonus);
    }

    return calculateFuel(newfuel, consumption, recharge, solarBonus, Currplanet + 1, totalPlanets);
}

int main()
{

    int initialFuel;
    int fuelConsumption;
    int fuelRecharge;
    int solarBonus;
    int totalPlanets;
    printf("Enter Initial Fuel: ");
    scanf("%d", &initialFuel);
    printf("Enter Fuel Consumotion For One Planet: ");
    scanf("%d", &fuelConsumption);
    printf("Enter Fuel Recharge: ");
    scanf("%d", &fuelRecharge);
    printf("Enter Solar Bonus After 4 Planets: ");
    scanf("%d", &solarBonus);
    printf("Enter Total Number Of Planets to Travel: ");
    scanf("%d", &totalPlanets);
    printf("====Journey====\n");
    int Journey = calculateFuel(initialFuel, fuelConsumption, fuelRecharge, solarBonus, 1, totalPlanets);
    if (Journey)
    {
        printf("SUCCESS! The spacecraft completed its journey to all %d planets.\n", totalPlanets);
    }
}