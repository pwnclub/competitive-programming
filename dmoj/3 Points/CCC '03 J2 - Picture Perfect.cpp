// CCC '03 J2 - Picture Perfect
// dmoj.ca/problem/ccc03j2
// 2017-07-01
// AC in 0.00s
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int c = -1;
	
	while (c != 0)
	{
		cin >> c;
        
		for (int i = sqrt(c); i >= 1; --i)
			if (c % i == 0)
			{
				cout << "Minimum perimeter is " << i * 2 + (c / i) * 2 << " with dimensions " << i << " x " << c / i << '\n';
				break;
			}
	}
}