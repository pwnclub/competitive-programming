// DMOPC '15 Contest '15 Contest 5 P1 - Gel Bananas
// dmoj.ca/problem/dmopc15c5p1
// 2017-06-25
// AC in 0.03s
#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
	if (b == 0)
		return a;
		
	gcd(b, a % b);
}

int main()
{
	long long a, b, x;
	
	cin >> a >> b >> x;
	
	long long lcm = a * b / gcd(a, b);
	
	cout << (x - 1) / lcm + 1 << endl;
}