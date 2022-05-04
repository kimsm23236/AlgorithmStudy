#include <iostream>

using namespace std;

int d(int c)
{
	int num = c;

	while (c > 0)
	{
		num += c % 10;
		c /= 10;
	}


	return num;
}

int main()
{
	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 0; j <= 10000; j++)
		{
			if (i == d(j))
			{
				break;
			}	
			else if (j >= i)
			{ 
				cout << i << "\n";
				break;
			}			
		}
	}
	return 0;
}