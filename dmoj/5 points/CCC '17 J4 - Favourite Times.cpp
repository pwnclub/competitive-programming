// CCC '17 J4 - Favourite Times
// dmoj.ca/problem/ccc17j4
// 2017-06-25
// AC in 0.08s
#include <iostream>
using namespace std;

int main()
{
	int d, t = 0;
	
	cin >> d;
	
	t += d / 720 * 31;
	d %= 720;
	
	if (d == 0)
	{
		cout << t << '\n';
		return 0;
	}
	
	d++;
	
	for(int i = 0; i <= 5; ++i)
		for (int j = 0; j <= 9; ++j)
		{
			if (i == 3 && j == 4)
				t++;

			d--;
			
			if (d == 0)
			{
				cout << t << '\n';
				return 0;
			}
		}

	for (int i = 1; i <= 9; ++i)
		for (int j = 0; j <= 5; ++j)
			for (int k = 0; k <= 9; ++k)
			{
				if (j - i == k - j)
					t++;
					
				d--;
				
				if (d == 0)
				{
					cout << t << '\n';
					return 0;
				}
			}

	for (int i = 0; i <= 1; ++i)
		for (int j = 0; j <= 5; ++j)
			for (int k = 0; k <= 9; ++k)
			{
				if (j - i == k - j && j - i == i - 1)
					t++;
					
				d--;
				
				if (d == 0)
				{
					cout << t << '\n';
					return 0;
				}
			}
}