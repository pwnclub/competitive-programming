// MWC '15 #4 P2: Data Formatting
// dmoj.ca/problem/mwc15c4p2
// 2017-06-24
// AC in 0.06s
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

	int n;

	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	sort(v.begin(), v.end());
	
	int i = 0, j = n - 1;

	while (i <= j)
	{
		cout << v[i] << ' ';

		if (i == j)
			break;

		cout << v[j] << ' ';

		i++;
		j--;
	}
	cout << '\n';
}