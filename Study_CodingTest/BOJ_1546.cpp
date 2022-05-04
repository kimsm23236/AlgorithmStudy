#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, num, M = 0;
	double sum = 0, avr;
	vector<int> v;
	cin >> N;
	cin.ignore();
	string str;
	getline(cin, str);
	stringstream strNum(str);
	while (strNum >> num)
	{
		M = num > M ? num : M;
		v.push_back(num);
	}

	for (int i = 0; i < N; i++)
	{
		sum += (double)v[i] / M * 100;
	}
	avr = sum / v.size();

	cout << avr;

	return 0;
}