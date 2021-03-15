#include "point.h"
#include <iostream>
using namespace std;
	
	point::point(float x, float y){
		this->x = x;
		this->y = y;
	}
	
	void point::deplace(float dx, float dy){
		this->x = dx;
		this->y = dy;
	}
	float point::abscisse(){
		return x;
	}

	float point::ordonnee(){
		return y;
	}
