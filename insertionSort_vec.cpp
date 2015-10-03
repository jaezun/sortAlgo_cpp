#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void	insertionSort(vector<int>& A)
{
	int	i, j, tmp, ASize;
	ASize = A.end() - A.begin();

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
	int	pos = 0;
	int	A[] = {2333, 4, 83, 11, 1, 949, 2};
	vector<int> vA;
	for (;pos != sizeof(A) / sizeof(*A) - 1; pos++)
		vA.push_back(A[pos]);
	pos = 0;

	insertionSort(vA);
	vector<int>::iterator it = vA.begin();
	vector<int>::iterator ite = vA.end();
	for (; it != ite; it++)
		cout << "Array[" << pos++ << "]: " << *it << endl;
	return (EXIT_SUCCESS);
}
