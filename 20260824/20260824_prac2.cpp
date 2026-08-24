#include<iostream>
using namespace std;

int main(void)
{
	int numbers[5] = { 35,82,17,96,54 };
	int* pNum;
	int max;

	pNum = numbers;
	for (int i = 0; i < 5; i++)
	{
	
		if (i == 0)
		{
			max = *(pNum + i);
		}
		if (max < *(pNum + i))
		{
			max = *(pNum + i);
		}
	}
	cout << "Å‘å’l:" << max << endl;
	return 0;
}