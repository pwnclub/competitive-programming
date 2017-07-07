// CCC '06 J2 - Roll the Dice
// dmoj.ca/problem/ccc06j2
// 2017-02-24
// AC in 0.02s
#include <iostream>
using namespace std;

int main()
{
	int a, b, sol = 0;
	
	cin >> a >> b;
	
	for(int i = 1; i <= 9; ++i)
		if(a >= i && b >= 10-i)
			++sol;
			
	if(sol == 1)
		cout << "There is 1 way to get the sum 10.\n";
	else
		cout << "There are " << sol << " ways to get the sum 10.\n";
}