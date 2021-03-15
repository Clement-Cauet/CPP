#include <iostream>

class point{
	private:
		float x;
		float y;
	public:
		point(float x, float y);
		void deplace(float dx, float dy);
		float abscisse();
		float ordonnee();
};
