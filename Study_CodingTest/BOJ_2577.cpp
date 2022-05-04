#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A, B, C, M;
	vector<int> arr;
	cin >> A;
	cin >> B;
	cin >> C;
	M = A * B * C;
	while (M > 0)
	{
		arr.push_back(M % 10);
		M = M / 10;
	}
	for (int i = 0; i < 10; i++)
	{
		int count = 0;
		for (int num : arr)
		{
			if(i == num)
				count++;
		}
		cout << count << "\n";
	}
	
	return 0;
}