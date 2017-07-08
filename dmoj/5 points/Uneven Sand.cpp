// Uneven Sand
// dmoj.ca/problem/seed2
// 2017-06-26
// AC in 0.03s
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	long long u = 2000000000, c = 1000000000, l = 0, t = 0;
	string s;
	
	while (true)
	{
		cout << c << '\n';
		cin >> s;
		
		if (s == "OK")
			return 0;
			
		if (s == "SINKS")
		{
			t = c;
			c = abs((u + c) / 2);
			l = t;
		}
		else
		{
			long long t = c;
			c = abs((l + c) / 2);
			u = t;
		}
	}
}