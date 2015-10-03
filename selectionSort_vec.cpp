#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void	selectionSort(vector<int>& vA)
{
	int	i, j, tmp, min;
	int	vASize = vA.size();

	for (i = 0; i < vASize; i++)
	{
		min = i;
		for (j = i + 1; j < vASize; j++)
		{
			if (vA[min] > vA[j])
				min = j;
		} 
		if (min != i)
		{
			tmp = vA[i];
			vA[i] = vA[min];
			vA[min] = tmp;
		}
	}
}

int	main(void)
{
	int	pos = 0;
	int	A[] = {23, 5, 1, 33, 9, 2};
	vector<int> vA (A, A + sizeof(A) / sizeof(*A));

	selectionSort(vA);

	vector<int>::iterator it;
	for (it = vA.begin(); it != vA.end(); it++)
		cout << "Array[" << pos++ << "]: " << *it << endl; 	
	return EXIT_SUCCESS;
}
