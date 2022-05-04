#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, newNum;
	string str;
	vector<int> arr;
	cin >> N;
	cin.ignore();
	getline(cin, str);
	stringstream strNum(str);
	while (strNum >> newNum)
	{
		arr.push_back(newNum);
	}

	int minNum = arr.at(0);
	int maxNum = arr.at(0);
	
	for (int i = 0; i < arr.size(); i++)
	{
		if(minNum > arr.at(i))
			minNum = arr.at(i);

		if(maxNum < arr.at(i))
			maxNum = arr.at(i);
	}
	cout << minNum << " " << maxNum;
	
	return 0;
}