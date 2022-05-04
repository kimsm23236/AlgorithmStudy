#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, X;
	cin >> N >> X;

	cin.ignore();

	string str;
	getline(cin, str);
	vector<int> A;
	stringstream orgNum(str);
	int newNum;

	while (orgNum >> newNum)
	{
		A.push_back(newNum);
	}
	
	for (auto num : A)
	{
		if (num < X)
		{
			cout << num << " ";
		}
	}

	return 0;
}