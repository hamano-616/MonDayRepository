#include"Animal.h"
#include<iostream>
using namespace std;

Animal::Animal(string name)
{
	this->name = name;
}
string Animal::GetName()
{
	return name;
}

void Animal::Speak()
{
	cout << "“®•¨‚Ì–Â‚«º" << endl;
}