// CCC '14 J3 - Double Dice
// dmoj.ca/problem/ccc14j3
// 2017-02-23
// AC in 0.02s
#include <iostream>
using namespace std;

int main()
{
	int n, a, b, f = 100, d = 100;
	
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		
		if (a > b)
			d -= a;
		else if (b > a)
			f -= b;
	}
	cout << f << '\n' << d << '\n';
 }