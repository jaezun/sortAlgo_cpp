#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void	bubbleSort(vector<int>&	vArr)
{
	int	i, j, tmp, arrSize;
	arrSize = vArr.size();

	for (i = 0; i < arrSize; i++)
	{
		for (j = (arrSize - 1); j > i; j--)
		{
			if (vArr[j] < vArr[j - 1])
			{
				tmp = vArr[j];
				vArr[j] = vArr[j - 1];
				vArr[j - 1] = tmp;
			}			
		} 
	}
}

int	main(void)
{
	int	pos = 0;
	int	arr[] = {23, 2, 3, 34, 6};
	vector<int> vArr(arr, arr + sizeof(arr) / sizeof(*arr));

	bubbleSort(vArr);
	vector<int>::iterator	it;
	for (it = vArr.begin(); it != vArr.end(); it++)
		cout << "Array[" << pos++ << "]: " << *it << endl;
	return (EXIT_SUCCESS);
}
