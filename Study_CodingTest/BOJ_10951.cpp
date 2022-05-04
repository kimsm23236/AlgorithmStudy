#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A , B;
	while (true)
	{
		cin >> A >> B;
		if(cin.eof())
			break;
		cout << A + B << "\n";
	}
	
	return 0;
}