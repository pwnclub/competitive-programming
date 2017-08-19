// CCC '02 S1 - The Students' Council Breakfast
// dmoj.ca/problem/ccc02s1
// 2017-07-03
// AC in 0.01s
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int p, g, r, o, t, tot = 0, min = 100000000;
	
	cin >> p >> g >> r >> o >> t;
	
	for(int i = 0; i <= t/p; ++i)
		for(int j = 0; j <= t/g; ++j)
			for(int k = 0; k <= t/r; ++k)
				for (int l = 0; l <= t/o; ++l)
					if (p*i + g*j + r*k + o*l == t)
					{
						cout << "# of PINK is " << i << " # of GREEN is " << j << " # of RED is " << k << " # of ORANGE is " << l << '\n';
						
						++tot;
						
						if (i + j + k + l < min)
							min = i + j + k + l;
					}
					
	cout << "Total combinations is " << tot << ".\nMinimum number of tickets to print is " << min << ".\n";
}