#include <iostream>
#include <vector>

using namespace std;

int Sum(vector<int> arr)
{
	int total = 0;
	for (int num : arr)
	{
		total += num;
	}
	return total;
}

int main()
{
	return 0;
}