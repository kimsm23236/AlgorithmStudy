#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A = 1, B = 1;
	while (true)
	{
		cin >> A >> B;

		if(A == 0 && B == 0)
		break;

		cout << A + B << "\n";
	}

	return 0;
}