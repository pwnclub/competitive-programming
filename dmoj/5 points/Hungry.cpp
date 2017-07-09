// Hungry
// dmoj.ca/problem/hungry
// 2017-06-26
// AC in 0.47s
#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    
	int n, f, t;
	
	cin >> n;
	
	vector<tuple<int, int , int>> v (n);
	
	for (int i = 1; i <= n; ++i)
	{
		cin >> f >> t;
		v[i - 1] = make_tuple(f, t, i);
	}

	std::sort(begin(v), end(v), [](auto const &t1, auto const &t2) {
		return get<0>(t1) < get<0>(t2); 
	});
	
	for (auto it : v)
		cout << get<2>(it) << ' ';
	cout << '\n';

	std::sort(begin(v), end(v), [](auto const &t1, auto const &t2) {
		return get<1>(t1) < get<1>(t2);
	});
	
	for (auto it : v)
		cout << get<2>(it) << ' ';
	cout << '\n';
}