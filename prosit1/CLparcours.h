#ifndef CLPARCOURS_H
#define CLPARCOURS_H 
#include<iostream>
#include<vector> 

using namespace std;  

#include"CLpoint.h" 

class CLparcours : protected CLpoint {

	protected :
		
		int maxPoints;
		vector<CLpoint*> points; 		
		int currentPoints;  
	public : 
	
		CLparcours(int maxPoints); 
		void ajouterPoint(CLpoint* point); 
		double calculDistance(); 
		virtual void message() ; 





};





#endif 
