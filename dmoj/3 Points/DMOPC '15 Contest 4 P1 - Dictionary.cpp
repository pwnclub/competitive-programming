// DMOPC '15 Contest 4 P1 - Dictionary
// dmoj.ca/problem/dmopc15c4p1
// 2017/07/28
// AC in 0.02s
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string dict[10];

int main()
{
    int n;
    string s;

    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> dict[i];

    sort(dict, dict + n);

    for (int i = 0; i < n; ++i)
    {
        if (i != 0 && dict[i - 1][0] != dict[i][0])
            cout << '\n';

        cout << dict[i];

        if (i != n - 1 && dict[i + 1][0] == dict[i][0])
            cout << ", ";
    }
}