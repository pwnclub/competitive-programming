// CCC '02 S2 - Fraction Action
// dmoj.ca/problem/ccc02s2
// 2017-02-23
// AC in 0.02s
#include <iostream>
using namespace std;

int gcd(int a, int b) 
{
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	int a, b, divi;

	cin >> a >> b;

	divi = gcd(a % b, b);

	if(a / b != 0 || a % b == 0)
		cout << a / b << ' ';

	if (a % b != 0)
		cout << a % b / divi << '/' << b / divi << '\n';
 }