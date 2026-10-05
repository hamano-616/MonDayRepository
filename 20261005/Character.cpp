#include "Character.h"
#include"config.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
Character::Character()
{
	hp = MAX_HP;
	power = 0;
	defense = 0;
	evade = 0;
}
