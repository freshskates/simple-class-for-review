#include <iostream>
const double pi = 3.1415926535;
class Cyl {
	int radius, height;
public:
	Cyl(int r, int h) {
		radius = r; height = h; 
	}
	void init(int r, int h) {
		radius = r; height = h;
	}
	double getVol() {
		return (pi * (pow((double)this->radius, 2) * (double)this->height));
	}
};