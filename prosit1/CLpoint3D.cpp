#include "CLpoint3D.h"
#include <iostream>
#include "CLpoint.h" 
using namespace std;

CLpoint3D::CLpoint3D() : CLpoint(), z(0) {}

CLpoint3D::CLpoint3D(double x, double y, double z) : CLpoint(x, y), z(z) {}



int CLpoint3D :: getZ () const {

return z; 

}



void CLpoint3D::affichierCoordo() const {
    cout << "x: " << getX() << ", y: " << getY() << ", z: " << getZ() << endl;
}

