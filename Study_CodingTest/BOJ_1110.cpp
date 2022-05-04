#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, num, cycle;
	cin >> num;
	N = num;
	cycle = 0;

	while (true)
	{
		cycle++;
		
		int a = num / 10;
		int b = num % 10;

		num = a + b;

		num = b * 10 + (num < 10 ? num : num % 10);

		if(num == N)
			break;
	}
	
	cout << cycle;
	return 0;
}