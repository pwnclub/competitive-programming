// DMPG '17 S1 - Molly and Difference
// dmoj.ca/problem/dmpg17s1
// 2017-05-15
// AC in 1.57s
#include <iostream>
#include <algorithm>
using namespace std;

int v[1000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int a, t, d = 1000000000;

	cin >> a;

	for (int i = 0; i < a; ++i)
		cin >> v[i];

	sort(v, v + a);

	for (int i = 1; i < a; ++i)
		if (v[i] - v[i - 1] < d)
			d = v[i] - v[i - 1];

	cout << d << '\n';
}