// Favorite Numbers
// dmoj.ca/problem/favnumber
// 2017-06-27
// AC in 5.63s
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n, q, j;
	
	cin >> n;
	
	vector<int> v(n);
	
	for (int i = 0; i < n; ++i)
		cin >> v[i];
		
	sort(v.begin(), v.end());
	
	cin >> q;
	
	for (int i = 0; i < q; ++i)
	{
		cin >> j;
		int num = v[lower_bound(v.begin(), v.end(), j) - v.begin()];
		cout << num << ' ' << upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num) << endl;
	}
}