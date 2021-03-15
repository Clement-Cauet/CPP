#include "point.h"
#include <iostream>
using namespace std;

	float abscisse(float x){
		return this->x = x;
	}
	
	float ordonnee(float y){
		return this->y =y;
	}
	
	void point::deplace(float x, float y){
		this->x += x;
		this->y += y;
	}
