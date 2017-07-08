// List Minimum (Hard)
// dmoj.ca/problem/bf1hard
// 2017-02-24
// AC in 0.27s
#include <iostream>
#include <algorithm>
using namespace std;

int v[100001];

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v, v + n);

    for (int i = 0; i < n; ++i)
        cout << v[i] << '\n';
}