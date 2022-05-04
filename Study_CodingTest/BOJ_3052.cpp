#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num, r = 10;
	vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		v.push_back(num % 42);
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if (v.at(i) == v.at(j))
			{
				r--;
				break;
			}
		}
	}
	cout << r;

	return 0;
}