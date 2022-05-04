#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	vector<int> arr;
	cin >> N;
	cin.ignore();
	string str;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		int point = 0, tp = 0;
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == 'O')
			{
				point++;
			}
			else if (str[j] == 'X')
			{
				point = 0;
			}
			tp += point;
		}
		arr.push_back(tp);
	}

	for (int t : arr)
	{
		cout << t << "\n";
	}
	
	return 0;
}