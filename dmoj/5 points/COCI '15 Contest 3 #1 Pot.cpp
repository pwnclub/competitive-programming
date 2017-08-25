// COCI '15 Contest 3 #1 Pot
// dmoj.ca/problem/coci15c3p1
// 2017-08-16
// AC in 0.04s
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, a, s = 0;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		s += pow(a / 10, a % 10);
	}
	cout << s << '\n';
}