// TLE '16 Contest 6 (Mock CCC) J1 - Paper Printing
// dmoj.ca/problem/tle16c6j1
// 2017-06-25
// AC in 0.07s
#include <iostream>
using namespace std;

int v[5000];

int main()
{
	int n, m, a, x, y;
	
	cin >> n >> m >> a;
	
	for(int i = 0; i < a; ++i)
	{
		cin >> x >> y;
		v[x] = y;
	}
	
	if (n > m)
	{
		cout << "The printer jams at 0 second(s).\n";
		return 0;
	}
	
	for (int i = 0; i < 1000000; ++i)
	{
		if (n < 0)
		{
			cout << "The printer melts at " << i << " second(s).\n";
			return 0;
		}
		
		n += v[i];
		
		if (n > m)
		{
			cout << "The printer jams at " << i << " second(s).\n";
			return 0;
		}
		
		--n;
	}
}