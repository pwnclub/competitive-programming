// CCC '13 S5 - Factor Solitaire
// dmoj.ca/problem/ccc13s5
// 2017-02-22
// AC in 0.05s
#include <iostream>
#include <math.h>
using namespace std;

int gf(int num)
{
	for (int i = 2; i <= sqrt(num); ++i)
		if (num % i == 0)
			return num / i;

	return 1;
}

int main()
{

	int n, cost = 0;
	
	cin >> n;

	while (n > 1)
	{
		int fact = gf(n);
		cost += (n - fact) / fact;
		n -= fact;
	}

	cout << cost << '\n';
}