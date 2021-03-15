#include "point.cpp"

affiche(float x, float y){
	cout<<"x = "<<x<<"et y = "<<y<<"\n";
}

main(){
	point a(20, 10);
	cout <<"Deplacement d'un point :\n";
	affiche(float x, float y);
	a.deplace(10, 5);
	affiche(float x, float y);
}
