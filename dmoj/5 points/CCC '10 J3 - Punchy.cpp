// CCC '10 J3 - Punchy
// dmoj.ca/problem/ccc10j3
// 2017-06-23
// AC in 0.02s
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int n, v, a = 0, b = 0;
	char c, y;
	
	cin >> n;
	
	while (n != 7)
	{
		cin >> c;
		
		if (n == 2)
		{
			if (c == 'A')
				cout << a << '\n';
			else
				cout << b << '\n';
		}
		else if (n == 1)
		{
			cin >> v;
			
			if (c == 'A')
				a = v;
			else
				b = v;
		}
		else
		{
			cin >> y;
			if (n == 3)
			{
				if (c == 'A' && y == 'A')
					a += a;
				else if (c == 'A' && y == 'B')
					a += b;
				else if (c == 'B' && y == 'A')
					b += a;
				else
					b += b;
			}
			else if (n == 4)
			{
				if (c == 'A' && y == 'A')
					a *= a;
				else if (c == 'A' && y == 'B')
					a *= b;
				else if (c == 'B' && y == 'A')
					b *= a;
				else
					b *= b;
			}
			else if (n == 5)
			{
				if (c == 'A' && y == 'A')
					a -= a;
				else if (c == 'A' && y == 'B')
					a -= b;
				else if (c == 'B' && y == 'A')
					b -= a;
				else
					b -= b;
			}
			else
			{
				if (c == 'A' && y == 'A')
					a /= a;
				else if (c == 'A' && y == 'B')
					a /= b;
				else if (c == 'B' && y == 'A')
					b /= a;
				else
					b /= b;
			}
		}
		cin >> n;
	}
}