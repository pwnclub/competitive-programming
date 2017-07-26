// TLE '16 Contest 8 P2 - Dank Meme
// dmoj.ca/problem/tle16c8p2
// 2017-04-20
// AC in 0.04s
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int t, n;
	
	cin >> t;
	
	for (int i = 0; i < t; ++i)
	{
		vector<int> v;
		
		cin >> n;
		
		if (n == 0)
			v.push_back(0);
			
		while (n > 0)
		{
			v.push_back(n % 2);
			n /= 2;
		}
		
		for (int j = v.size()-1; j >= 0; --j)
		{
			if (v[j] == 1)
				cout << "dank ";
			else
				cout << "meme ";
		}
		
		cout << '\n';
	}
}
