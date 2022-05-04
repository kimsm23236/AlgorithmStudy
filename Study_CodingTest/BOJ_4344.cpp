#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cout.precision(3);
	cout << fixed;

	int C, count = 0;
	vector<double> vp, va;
	cin >> C;
	string str;
	double newNum, N, sum, avr;
	bool IsNumStu = true;
	cin.ignore();
	for (int i = 0; i < C; i++)
	{
		getline(cin, str);
		stringstream strNum(str);
		
		sum = 0;
		count = 0;
		IsNumStu = true;

		while (strNum >> newNum)
		{
			if (IsNumStu)
			{
				IsNumStu = false;
				N = newNum;
			}
			else
			{
				sum += newNum;
				vp.push_back(newNum);
			}			
		}
		avr = sum / N;
		
		for (auto p : vp)
		{
			count += p > avr ? 1 : 0;
		}
		va.push_back(count / N);
		vp.clear();
	}

	for (auto a : va)
	{
		cout << a * 100.f << "%\n";
	}

	return 0;
}