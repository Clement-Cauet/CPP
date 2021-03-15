#include "point.cpp"

main(){
	point a(20, 10);
	cout <<"Deplacement d'un point :\n";
	a.affiche();
	a.deplace(10, 5);
	a.affiche();
}
