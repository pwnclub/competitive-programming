// DMPG '17 B1 - Whale and Soul
// dmoj.ca/problem/dmpg17b1
// 2017-05-15
// AC in 0.05s
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, c, d;
    vector<pair<int, int>> v;
    
	cin >> n;
    
	for (int i = 0; i < n; ++i)
	{
		cin >> c >> d;
		v.push_back(make_pair(c, d));
	}
    
	sort(v.begin(), v.end());
	sort(v.begin(), v.end(), [](auto &left, auto &right) {
		return left.second > right.second;
	});
    
	cout << v[0].first << ' ' << v[0].second << '\n';
}