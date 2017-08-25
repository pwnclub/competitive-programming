// Equation Solver
// dmoj.ca/problem/gfssoc2j3
// 2017-06-23
// AC in 0.05s
#include <iostream>
using namespace std;

int main()
{
	int x, a;
	char c = ' ';

	cin >> x;

	while (c != '=')
	{
		cin >> c;

		if (c != '=')
		{
			cin >> a;
			if (c == 'P')

				x += a;
			else
				x -= a;
		}
	}
	cout << x << '\n';
}