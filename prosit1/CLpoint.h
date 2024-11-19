#ifndef CLPOINT_H 
#define CLPOINT_H



class CLpoint {

	protected : 
		
		double x; 
		double y; 

	public : 
		
		CLpoint(); 
		CLpoint(double x, double y); 
		virtual void affichierCoordo() const ;
		virtual int getY() const ; 
		virtual int getX() const; 

};








#endif 
