#include <iostream>
#include <cstdlib>

using namespace std;

class	Counter
{
	private:
		static int count;

	public:
		void	setCount() { count++; }
		int	getCount() const { return count;  }
		bool	binarySearch(int value, int arr[], int left, int right)
                {
                	this->setCount();
                	if (left > right)
                		return false;
                	int	middle = (left + right) / 2;
                	if (value == arr[middle])
                		return true;
                	else if (arr[middle] > value)
                		return binarySearch(value, arr, left, middle - 1);
                	else 
                		return binarySearch(value, arr, middle + 1, right);
                }
};

int	Counter::count = 0;

int	main(void)
{
	Counter	obj;
	int	arr[] = {-2, 0, 4, 6, 7, 45, 7765, 22333, 54662526, 23523524};
	bool	result = obj.binarySearch(22333, arr, 0, sizeof(arr) / sizeof(*arr));	

	cout << "count of operations: " << obj.getCount() << endl;
	if (result)
	{
		cout << "FOUND" << endl;
		return (EXIT_SUCCESS);
	}
	cout << "NOT FOUND" << endl;
	return (EXIT_FAILURE);
}
