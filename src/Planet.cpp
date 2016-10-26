#include "Planet.h"

Planet::Planet()
{
    name = "Unknown";
    mass = 0;
    diameter = 0;
}

Planet::Planet(string name, double mass, double diameter)
{
    this-> name = name;
    this-> mass = mass;
    this-> diameter = diameter;
}

bool operator>=(const Planet& p1, const Planet& p2)
{
    return p1.mass >= p2.mass;
}

bool operator<=(const Planet& p1, const Planet& p2)
{
    return p1.mass <= p2.mass;
}
ostream& operator<<(ostream& c, const Planet& planet)
{
    c << "The " << planet.name << " Planet - Mass: " << planet.mass << " yettagrams, Diameter: "
        << planet.diameter << " miles.\n";
}
istream& operator>>(istream& c, Planet& planet)
{
    c >> planet.name >> planet.mass >> planet.diameter;
}
