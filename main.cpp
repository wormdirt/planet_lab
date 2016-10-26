#include <iostream>
#include <vector>
#include "SolarSystem.h"
using namespace std;
int main()
{
    SolarSystem the_system;
    int num_planets;


    cout << "How many planets are in your solar system? ";
    cin >> num_planets;

    the_system.addPlanets(num_planets);

    cout << the_system;

    cout << "Which planet has the largest mass?\n";
    the_system.planetWithLargestMass();

    return 0;
}
