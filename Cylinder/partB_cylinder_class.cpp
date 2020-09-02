#include <iostream>
const double pi = 3.1415926535;
class Cyl {
	int radius, height;
public:
	//constructor
	Cyl(int r, int h) {
		radius = r; height = h; 
	}
	//initiate or to change radius / height
	void init(int r, int h) {
		radius = r; height = h;
	}
	double getVol() {
		//formula volume
		return (pi * (pow((double)this->radius, 2) * (double)this->height));
	}
};