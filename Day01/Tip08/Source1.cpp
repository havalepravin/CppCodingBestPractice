#include <iostream>
#define SIZE 5
int main()
{
	int arr[5] = {1,2,3,4,5};
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = SIZE - 1; j > i; j++)
		{
			if (arr[j] > arr[j - 1])
			{

			}
		}
	}
}