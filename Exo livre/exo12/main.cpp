#include "point.cpp"

int affiche(point &a){
	cout<<"X= "<<a.abscisse()<<" et Y= "<<a.ordonnee()<<"\n";
}
int main(){
	cout <<"Deplacement d'un point :\n";
	point a(20, 10);
	a.abscisse();
	a.ordonnee();
	affiche(a);
	a.deplace(10, 5);
	affiche(a);
	
	return 0;
}
