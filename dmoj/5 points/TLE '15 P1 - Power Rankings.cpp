// TLE '15 P1 - Power Rankings
// dmoj.ca/problem/tle15p1
// 2017-06-24
// AC in 0.19s
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n, p;
	cin >> n >> p;

	vector<pair<int, string>> st(n);
	vector<int> t(n*p);

	for (int i = 0; i < n; ++i)
		cin >> st[i].second;

	for (int i = 0; i < n*p; ++i)
		cin >> t[i];

	for (int i = 0; i < n; ++i)
	{
		int sum = 0;

		for (int j = 0; j < p; ++j)
			sum += t[n*j + i];

		st[i].first = sum;
	}

	sort(st.begin(), st.end());

	for (int i = 0; i < n; ++i)
		cout << i + 3 << ". " << st[n-1-i].second << '\n';
}