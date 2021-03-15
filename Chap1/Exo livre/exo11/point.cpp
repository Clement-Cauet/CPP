#include "point.h"
#include <iostream>
using namespace std;

	point::point(float x, float y){
		this->x = x;
		this->y = y;
	}
	
	void point::affiche(){
		cout << "x = "<< this->x << " et y = "<<this->y<<"\n";
	}
	
	void point::deplace(float x, float y){
		this->x += x;
		this->y += y;
	}
