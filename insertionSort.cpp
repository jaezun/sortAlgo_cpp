#include <iostream>
#include <cstdlib>

using namespace std;

void	insertionSort(int A[], int ASize)
{
	int	i, j, tmp;

	for (i = 1; i < ASize; i++)
	{
		for (j = i; j > 0; j--)
		{
			if (A[j] < A[j - 1])
			{
				tmp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = tmp;
			}
			else
				break ;
		}		
	}
}

int	main(void)
{
	int	A[] = {2333, 4, 83, 11, 1, 949, 2};
	int	ASize = sizeof(A) / sizeof(*A);

	insertionSort(A, ASize);
	for (int i = 0; i < ASize; i++)
		cout << "A[" << i << "]: " << A[i] << endl;
	return (EXIT_SUCCESS);
}
