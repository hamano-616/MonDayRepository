#include <iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_HeaderMain2_hamano.h"
using namespace std;

int main(void)
{
	int exp = 0;
	int level = 1;

	srand((unsigned int)time(NULL));

	while (true)
	{
		Run(exp, level);
	}

	return 0;
}