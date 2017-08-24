// DMOPC '15 Contest 2 P1 - Grumpy Dwarf
// dmoj.ca/problem/dmopc15c2p1
// 2017-06-25
// AC in 0.05s
#include <iostream>
using namespace std;

int main()
{
	int n, k;
	
	cin >> n >> k;
	
	int t = n;
	
	while (n >= k)
	{
		t += n / k;
		n = n / k + n % k;
	}
	
	cout << t << '\n';
}