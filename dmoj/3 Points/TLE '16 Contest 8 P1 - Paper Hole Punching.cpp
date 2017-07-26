// TLE '16 Contest 8 P1 - Paper Hole Punching
// dmoj.ca/problem/tle16c8p1
// 2017-04-20
// AC in 0.06s
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	vector<char> t;
	string s, d;
	int n;
	
	cin >> s;
	
	for (int i = 1; i < s.size(); ++i)
		t.push_back(s[i]);
		
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> d;
		
		bool wor = true;
		
		for (int j = 0; j < t.size(); ++j)
		{
			auto it = find(d.begin(), d.end(), t[j]);
			
			if (it == d.end())
				wor = false;
		}
		
		if (wor == true)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}