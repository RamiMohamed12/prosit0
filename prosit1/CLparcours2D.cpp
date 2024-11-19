#include "CLparcours2D.h"
#include <iostream>
using namespace std;

CLparcours2D::CLparcours2D(int maxPoints) : CLparcours(maxPoints) {}

void CLparcours2D::message() {
    cout << "2D Parcours Points:" << endl;
    for (size_t i = 0; i < points.size(); ++i) {
        cout << i + 1 << ". ";
        points[i]->affichierCoordo(); 
        cout << endl;
    }
}

