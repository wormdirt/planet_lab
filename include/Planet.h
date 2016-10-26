#ifndef PLANET_H
#define PLANET_H
#include <iostream>
#include <vector>

using namespace std;


class Planet
{
    friend bool operator>=(const Planet&, const Planet&);
    friend bool operator<=(const Planet&, const Planet&);
    friend ostream& operator<<(ostream&, const Planet&);
    friend istream& operator>>(istream&, Planet&);

    private:
        string name;
        double mass;
        double diameter;

    public:
        Planet();
        Planet(string name, double mass, double diameter);
};

#endif // PLANET_H
