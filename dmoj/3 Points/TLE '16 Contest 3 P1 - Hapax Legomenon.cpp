// TLE '16 Contest 3 P1 - Hapax Legomenon
// dmoj.ca/problem/tle16c3p1
// 2017-06-27
// AC in 0.04s
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, int> m;
	int n, sol = 0;
	string s;
	
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		m[s]++;
	}
	
	for (auto it : m)
		if (it.second == 1)
			sol++;
			
	cout << sol << '\n';
}