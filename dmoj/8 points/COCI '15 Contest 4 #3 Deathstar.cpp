// COCI '15 Contest 4 #3 Deathstar
// dmoj.ca/problem/coci15c4p3
// 2017-08-03
// AC in 0.29s
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cur;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int sol = 0;
        for (int j = 0; j < n; ++j)
        {
            cin >> cur;
            sol |= cur;
        }
        cout << sol << ' ';
    }

    cout << '\n';
}