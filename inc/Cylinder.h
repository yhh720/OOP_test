# ifndef CYLINDER_H
# define CYLINDER_H

# include <iostream>

using namespace std;

class Cylinder
{
private:
    int radius;
    int height;
    double pi=M_PI;
public:
    Cylinder() : radius(0), height(0) {}
    Cylinder(int r, int h){
        radius = r;
        height = h;
    }
    double SurfaceArea()const;
    double Volume()const;
    double Circumference()const;
    friend istream &operator>>(istream & in, Cylinder & cldr);
    friend ostream &operator<<(ostream & out, const Cylinder & cldr);
};

# endif



