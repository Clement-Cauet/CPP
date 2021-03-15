#include "essai.h"
#include <iostream>
using namespace std;

void raz(essai *e){
	e->n = 0;
	e->x = 0;
}
void raz(essai &e){
	e.n = 0;
	e.x = 0;
}
int main(int argc, char** argv) {
	essai a;
	a.n = 5;
	a.x = 10;
	cout<<"a.n = "<<a.n<<" et a.x = "<<a.x<<endl;
	raz(&a);
	cout<<"a.n = "<<a.n<<" et a.x = "<<a.x<<endl;
	
	return 0;
}
