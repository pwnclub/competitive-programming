// CCC '16 S2 - Tandem Bicycle
// dmoj.ca/problem/ccc16s2
// 2017-02-24
// AC in 0.08s
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int d[101], p[101];

int main()
{
	int q, n;
	cin >> q >> n;

	for (int i = 0; i < n; ++i)
	    cin >> d[i];

	for (int i = 0; i < n; ++i)
	    cin >> p[i];

	if (q == 1)
	{
		int min_sum = 0;
		
		sort(d, d + n);
		sort(p, p + n);
		
		for (int i = 0; i < n; ++i)
			min_sum += max(d[i], p[i]);

		cout << min_sum << '\n';
	}
	else
	{
		int max_sum = 0;
		
		sort(d, d + n);
		sort(p, p + n, greater<int>());

		for (int i = 0; i < n; ++i)
			max_sum += max(d[i], p[i]);

		cout << max_sum << '\n';
	}
}