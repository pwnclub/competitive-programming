// Unique Elements
// dmoj.ca/problem/set
// 2017-06-27
// AC in 0.11s
#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int n, e;
	set<int> s;
	
	cin >> n;
	
	for (int i = 0; i < n; ++i) 
	{
	    cin >> e;
		s.insert(e);
	}
	
	cout << s.size() << '\n';
}
