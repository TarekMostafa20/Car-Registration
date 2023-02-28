#pragma once
#include <string>;
using namespace std;
class car
{
private:
	int  mode;
	string color;
	string maker;

public:
	void setmaker(string m);
	string getmaker();
	void setmode(int mo);
	int getmode();
	void setcolor(string c);
	string getcolor();

	car();
	~car();
};

