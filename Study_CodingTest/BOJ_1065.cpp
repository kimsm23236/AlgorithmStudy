#include <iostream>
#include <vector>

using namespace std;

int deungcha(int c)
{
	if(c < 100)
		return 1;

	vector<int> v;

	while (c > 0)
	{
		v.push_back(c % 10);
		c /= 10;
	}
	int dif = v.at(0) - v.at(1);
	for (int i = 0; i < v.size() - 1; i++)
	{
		if(v.at(i) - v.at(i+1) != dif)
			break;

		if(i == v.size() - 2)
			return 1;
	}
		
	return 0;
}

int main()
{
	int N, sum = 0;
	cin >> N;
	
	for (int i = 1; i <= N; i++)
	{
		sum += deungcha(i);
	}
	cout << sum;
	return 0;
}