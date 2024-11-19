#include "CLparcours3D.h"
#include <iostream>
using namespace std;

CLparcours3D::CLparcours3D(int maxPoints) : CLparcours(maxPoints) {}

// Specialized message for 3D parcours
void CLparcours3D::message() {
    cout << "3D Parcours Points:" << endl;
    for (size_t i = 0; i < points.size(); ++i) {
        cout << i + 1 << ". ";
        points[i]->affichierCoordo(); // Call CLpoint3D's affichierCoordo() if it's a CLpoint3D
        cout << endl;
    }
}

