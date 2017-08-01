// Lampost
// dmoj.ca/problem/hci16lamppost
// 2017-06-29
// AC in 15.25s
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v[1000001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, c, a, b, sv, sol = 0;
	
	cin >> n >> c;
	
	for (int i = 0; i < c; ++i)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for (int i = 0; i <= n; ++i)
		if (v[i].size() >= sol)
			sol = v[i].size(), sv = i;
			
	cout << sv << '\n';
}
