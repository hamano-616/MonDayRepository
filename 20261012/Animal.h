#pragma once
#include<string>
using namespace std;
class Animal
{
private:
	string name;

public:
	Animal(string name);

	string GetName();

	 virtual void Speak();

};

