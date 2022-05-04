#include <iostream>

using namespace std;

int main()
{
	int A, B, T;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << A + B << "\n";
	}

	return 0;
}