#include <iostream>

class point{
	private:
		float x;
		float y;
	public:
		point(float x, float y);
		void deplace(float x, float y);
		float abscisse();
		float ordonne();
};
