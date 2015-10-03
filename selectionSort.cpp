#include <iostream>
#include <cstdlib>

using namespace std;

void	selectionSort(int A[], int ASize)
{
	int	i, j, tmp, min;

	for (i = 0; i < ASize; i++)
	{
		min = i;
		for (j = i + 1; j < ASize; j++)
		{
			if (A[min] > A[j])
				min = j;
		} 
		if (min != i)
		{
			tmp = A[i];
			A[i] = A[min];
			A[min] = tmp;
		}
	}
}

int	main(void)
{
	int	A[] = {23, 5, 1, 33, 9, 2};
	int	ASize = sizeof(A) / sizeof(*A);
	selectionSort(A, ASize);

	for (int i = 0; i < ASize; i++)
		cout << "A[" << i << "]: " << A[i] << endl;
	return EXIT_SUCCESS;
}
