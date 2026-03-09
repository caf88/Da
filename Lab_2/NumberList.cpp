#include "NumberList.h"
#include <stdio.h>

void NumberList::Init()
{
	count = 0;
}

bool NumberList::Add(int x)
{
	if (count >= 10) return false;
	numbers[count] = x;
	count++;
	return true;
	
}

int partition(int arr, int low, int high) 
{
	int piv = arr[high];
	int i = low - 1;
	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}
void quick(int arr, int low, int high) {
	if (low < high) 
	{
		int par = partition(arr, low, high);
		quick(arr, low, par - 1);
		quick(arr, par + 1, high);
	}
}

void NumberList::Sort()
{
	quick(numbers, 0, n - 1);
}

void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		printf("%i:%i ",i,numbers[i]);
	printf("\n");
}
