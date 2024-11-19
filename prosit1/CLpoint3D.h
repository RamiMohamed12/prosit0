#ifndef CLPOINT3D_H 
#define CLPOINT3D_H

#include"CLpoint.h" 

class CLpoint3D : public CLpoint {

	private : 
		
		double x; 
		double y; 
		double z; 
	public : 
		
		CLpoint3D(); 
		CLpoint3D(double x, double y,double z); 
		void affichierCoordo() const override ;
		int getZ() const;

};








#endif 

