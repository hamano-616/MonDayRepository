#include<iostream>
using namespace std;

int main(void)
{
	int number[5] = { 10,20,30,40,50 };
	int* pNum;
	pNum = number;
	int innum;
	cin >> innum;
	for (int i = 0; i < 5; i++)
	{
		cout << "number[" << i << "];" << *(pNum + i) << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << innum << "”{" << "number[" << i<<"];" << *(pNum + i) * innum << endl;
	}
	return 0;
}
