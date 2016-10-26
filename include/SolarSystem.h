#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H
#include "Planet.h"
#include <iostream>
#include <vector>

using namespace std;

class SolarSystem
{

    friend ostream& operator<<(ostream&, SolarSystem&);

    private:
        vector<Planet> planets;
    public:
        const int getNumberOfPlanets();
        void addPlanets(int numPlanets);
        void planetWithLargestMass();
};

#endif // SOLARSYSTEM_H
