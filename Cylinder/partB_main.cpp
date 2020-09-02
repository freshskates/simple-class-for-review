#include <iostream>
#include "partB_cylinder_class.cpp"
using namespace std; 
int main() {
	//im a little confused if you want us to capitalize class objects
	Cyl temp(10, 20); //constructor
	cout << temp.getVol() << endl ; 
	temp.init(19, 30); //initializer
	cout << temp.getVol() << endl ;
}