// CCC '96 S3 - Pattern Generator
// dmoj.ca/problem/ccc96s3
// 2017-07-15
// AC in 0.00s
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, k;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int patt[30] = { 0 };

        cin >> n >> k;

        for (int j = 0; j < k; ++j)
            patt[j] = 1;

        cout << "The bit patterns are\n";

        do
        {
            for (int j = 0; j < n; ++j)
                cout << patt[j];
            cout << '\n';
        } while (prev_permutation(patt, patt + n));

        cout << '\n';
    }
}