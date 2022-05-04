#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, max;
	vector<int> arr;

	for (int i = 0; i < 9; i++)
	{
		cin >> n;
		if(i == 0)
			max = n;
		max = n > max ? n : max;
		arr.push_back(n);
	}
	cout << max << "\n" << find(arr.begin(), arr.end(), max) - arr.begin() + 1;

	return 0;
}