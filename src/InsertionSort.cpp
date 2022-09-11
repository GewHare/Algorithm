#include "InsertionSort.h"

int* InseetionSort(int* nums,int size)
{
	for (int i = 1; i < size; i++)
	{
		int key = nums[i];
		int j = i - 1;
		while (i > -1&&nums[j]>nums[i])
		{
			nums[i] = nums[j];
			nums[j] = key;
			j--;
		}
	}
    return nums;
}
