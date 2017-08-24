// DMPG '17 B3 - Heroes
// dmoj.ca/problem/dmpg17b3
// 2017-08-23
// AC in 1.11s
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, h, d, a, b;

    cin >> n >> h >> d;

    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;

        int hwin = ceil(a * 1.0 / d), first = ceil(h * 1.0 / b), ewin = first + int((first - 1) / 3);

        if (hwin <= ewin)
            cout << "Win " << hwin << '\n';
        else
            cout << "Lose " << ewin << '\n';
    }
}