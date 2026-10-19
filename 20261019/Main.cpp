#include<iostream>
#include"Servant.h"
#include"Saber.h"
#include"Rider.h"
#include"Archer.h"
int main(void)
{
	Saber saber;
	saber.Attack();
	saber.ShowProfile();

	Rider rider;
	rider.Attack();
	rider.ShowProfile();

	Archer archer;
	archer.Attack();
	archer.ShowProfile();

	return 0;
}