#include "car.h"
#include <iostream>

using namespace std;
void car::setmaker(string m)
{

	maker = m;
	

}

string car::getmaker()
{

	return maker;
}

void car::setmode(int mo)
{
	mode = mo;

	
}

int car::getmode()
{
	return mode;
}


void car::setcolor(string c)
{
	color = c;
	
}

string car::getcolor()
{
	return color;
}

