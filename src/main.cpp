#include "InsertionSort.h"
#include "AnyOperator.h"
#include <iostream>
using namespace std;
void Print(int* nums, int size);
int main()
{
	int* nums = new int[6] {5, 2, 4, 6, 1, 3};
	AnyOperator();
}
void Print(int* nums, int size)
{
	cout << '[';
	for (int i = 0; i < size; i++)
	{
		cout << nums[i];
		if(i!=size-1)
			cout << ',';
	}
	cout << ']';
}