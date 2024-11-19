#include "CLparcours.h" 
#include "CLpoint.h" 
#include<cmath>
#include<iostream> 

using namespace std; 

#include <vector> 

CLparcours :: CLparcours(int maxPoints) : maxPoints(maxPoints) {} 

void CLparcours :: ajouterPoint(CLpoint* point) {

if (points.size() < static_cast<size_t>(maxPoints)) {
        points.push_back(point);
    } else {
        cout << "Cannot add more points. Maximum limit of " << maxPoints << " reached." << endl;
    }

}


double CLparcours ::  calculDistance()  {

 double totalDistance = 0.0;

    for (size_t i = 1; i < points.size(); ++i) {
        double dx = points[i]->getX() - points[i - 1]->getX();
        double dy = points[i]->getY() - points[i - 1]->getY();
        totalDistance += sqrt(dx * dx + dy * dy);
    }

    return totalDistance;

}

void CLparcours::message() {
    cout << "Parcours points:" << endl;

    for (size_t i = 0; i < points.size(); ++i) {
        cout << i + 1 << ". ";
        points[i]->affichierCoordo();
        cout << endl;
    }
}
