// CCC '10 J1 - What is n, Daddy?
// dmoj.ca/problem/ccc10j1
// 2017-02-23
// AC in 0.03s
#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	if(n == 1 || n >= 9)
		cout << 1 << '\n';
	else if(n <= 3 || n >= 7)
		cout << 2 << '\n';
	else
		cout << 3 << '\n';
}