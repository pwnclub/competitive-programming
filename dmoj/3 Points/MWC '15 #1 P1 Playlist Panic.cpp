// MWC '15 #1 P1: Playlist Panic
// dmoj.ca/problem/mwc15c1p1
// 2017-06-24
// AC in 0.04s
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, m, s, x, y, t = 0, sol = 0;
	vector<int> v;
	
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> m >> s;
		v.push_back(m * 60 + s);
	}
	
	sort(v.begin(), v.end());
	
	cin >> x >> y;
	
	m = x * 60 + y;
	
	for (auto it : v)
	{
		t += it;
		
		if (t > m)
			break;
			
		++sol;
	}
	
	cout << sol << '\n';
}