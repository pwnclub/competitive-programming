// CCC '04 J1 - Squares
// dmoj.ca/problem/ccc04j1
// 2017-02-22
// AC in 0.01s
#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cin >> n;

	for (int i = 0; i <= 101; ++i)
		if (i*i > n)
		{
			cout << "The largest square has side length " << i - 1 << ".\n";
			break;
		}
}