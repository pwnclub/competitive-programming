// CCC '17 J3 - Exactly Electrical
// dmoj.ca/problem/ccc17j3
// 2017-06-25
// AC in 0.07s
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int a, b, c, d, t;
	
	cin >> a >> b >> c >> d >> t;
	
	if (abs(a - c) + abs(b - d) <= t && (t + abs(a - c) + abs(b - d)) % 2 == 0)
		cout << "Y\n";
	else
		cout << "N\n";
}