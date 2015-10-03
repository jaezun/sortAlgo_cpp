#include <iostream>
#include <cstdlib>

using namespace std;

void	bubbleSort(int	arr[], int arrSize)
{
	int	i, j, tmp;

	for (i = 0; i < arrSize; i++)
	{
		for (j = (arrSize - 1); j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}			
		} 
	}
}

int	main(void)
{
	int	arr[] = {23, 2, 3, 34, 6};
	int	arrSize = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, arrSize);
	for (int i = 0; i < arrSize; i++)
		cout << "arr[" << i << "]: " << arr[i] << " " << endl;
	return (0);
}
