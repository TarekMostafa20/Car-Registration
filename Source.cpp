#include <iostream>
#include "car.h"

using namespace std;







int main() {

	car c;
	string m,co;
	int mo;
	cout << "enter your car maker: ";
	cin >> m;
	cout << "enter your car model: ";
	cin >> mo;
	cout << "enter your car color: ";
	cin >> co;
	c.setmaker(m);
	c.setmode(mo);
	c.setcolor(co);

	cout << "\nthe maker for the car is " << c.getmaker() << endl;
	cout << "the model for the car is " << c.getmode() << endl;
	cout << "the color for the car is " << c.getcolor() << endl;







}