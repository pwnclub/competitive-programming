// RTE '16 J1 - Board Game
// dmoj.ca/problem/rte16j1
// 2017-06-07
// AC in 0.11s
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int a = 0, m = 0, t = 0;
	
	getline(cin, s);
	
	for (auto it : s)
		if (it == 'L')
			a++;
			
	for (auto it : s)
	{
		if (it == 'L')
			t++;
		else if (it != ' ')
		{
			if (t > m)
				m = t;
			t = 0;
		}
	}
	
	if (t > m)
		m = t;
		
	cout << a << ' ' << m << '\n';
}