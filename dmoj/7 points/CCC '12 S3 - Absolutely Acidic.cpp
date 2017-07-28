// CCC '12 S3 - Absolutely Acidic
// dmoj.ca/problem/ccc12s3
// 2017-07-28
// AC in
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> freqs(1001);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, r, f_max = 0, s_max = 0, num_f_max = 0;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> r;
        freqs[r]++;
    }

    for (int i = 1; i <= 1000; ++i)
        if (freqs[i] > f_max)
            f_max = freqs[i];
    
    
    
    for (int i = 1; i <= 1000; ++i)
    {
        if (freqs[i] > s_max && freqs[i] != f_max)
            s_max = freqs[i];
        if (freqs[i] == f_max)
            ++num_f_max;
    }

    if (num_f_max > 1)
    {
        int a, b;

        for (int i = 1000; i >= 1; --i)
            if (freqs[i] == f_max)
            {
                b = i;
                break;
            }

        for (int i = 1; i <= 1000; ++i)
            if (freqs[i] == f_max)
            {
                a = i;
                break;
            }

        cout << b - a << '\n';
    }
    else
    {
        int a, b, a2, b2;

        for (int i = 1000; i >= 1; --i)
            if (freqs[i] == f_max)
            {
                b = i;
                break;
            }

        for (int i = 1; i <= 1000; ++i)
            if (freqs[i] == s_max)
            {
                a = i;
                break;
            }

        for (int i = 1000; i >= 1; --i)
            if (freqs[i] == s_max)
            {
                b2 = i;
                break;
            }

        for (int i = 1; i <= 1000; ++i)
            if (freqs[i] == f_max)
            {
                a2 = i;
                break;
            }

        cout << max(b - a, b2 - a2) << '\n';
    }
}