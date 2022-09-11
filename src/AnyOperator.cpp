#include "AnyOperator.h"
void AnyOperator()
{
	int a = 3; int b = 7; int c = 5;
	//first
	for (int i = 0; i < 4; i++)
	{
		int sumab = 0;
		switch (i)
		{
		case 0:
			sumab = a + b;
			break;
		case 1:
			sumab = a - b;
			break;
		case 2:
			sumab = a * b;
			break;
		case 3:
			sumab = a / b;
			break;
		default:
			cout << "error";
			break;
		}
		for (int j = 0; j < 4; j++)
		{
			int sum = 0;
			switch (j)
			{
			case 0:
				sum = sumab + c;
				break;
			case 1:
				sum = sumab - c;
				break;
			case 2:
				sum = sumab * c;
				break;
			case 3:
				sum = sumab / c;
				break;
			default:
				cout << "error";
				break;
			}
			cout << sum;
			cout << endl;
		}
	}
}