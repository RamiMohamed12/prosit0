#include "CLpoint.h"
#include <iostream>
#include <string>

using namespace std;

CLpoint::CLpoint(double x, double y) : x(x), y(y) {}

void CLpoint ::affichierCoordo() const {

cout << "x : " <<x << "y: " << y; 

}

int CLpoint :: getY() const {

return y; 

}

int CLpoint :: getX() const {

return x;

}
