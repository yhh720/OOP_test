# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"

#include <iostream>
#include <iomanip>
#include <cmath>

double Cylinder :: SurfaceArea()const
{
    
    return 2*radius*radius*pi + 2*pi*radius*height;
}

double Cylinder :: Volume()const
{

    return radius*radius*pi*height;
}

double Cylinder :: Circumference()const
{

    return 2*pi*radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, const Cylinder & cldr)
{
    Cylinder cldr(r,h);
    
    out<<"Circumference: "<<fixed<<std::setprecision(3)<<cldr.Circumference()<<"\n";
    out<<"SurfaceArea: "<<fixed<<std::setprecision(3)<<cldr.SurfaceArea()<<"\n";
    out<<"Volume: "<<fixed<<std::setprecision(3)<<cldr.Volume()<<"\n";
    return out;
}


# endif
