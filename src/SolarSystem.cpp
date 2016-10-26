#include "SolarSystem.h"

const int SolarSystem::getNumberOfPlanets()
{
    return planets.size();
}

void SolarSystem::addPlanets(int numPlanets)
{
    planets.resize(numPlanets);
    for(int i=0; i<numPlanets; i++)
    {
        cout << "Okay lets get the information for your planets...\n"
            << "Name, Mass, Diameter: ";

        cin >> planets[i];
    }
}

void SolarSystem::planetWithLargestMass()
{
    Planet biggest;
    for(int i = 0; i<planets.size(); i++)
    {
        biggest = ((planets[i] >= planets[i+1]) ? planets[i] : planets[i+1]);
    }
    cout << biggest;
}

ostream& operator<<(ostream& c, SolarSystem& s1)
{
    for(int i=0; i < s1.planets.size(); i++)
    {
        c << s1.planets[i];
    }
}
