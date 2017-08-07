// THICC '17 P3 - The God of Death
// dmoj.ca/problem/thicc17p3
// 2017-08-05
// AC in 1.18s
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> loc[1000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q, x, y, l, day = 0;
    char c;

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> l;
        loc[i].push_back(make_pair(0, l));
    }

    cin >> q;

    for (int i = 0; i < q; ++i)
    {
        cin >> c >> x >> y;
        
        if (c == 'C')
        {
            ++day;
            loc[x].push_back(make_pair(day, y));
        }
        else
        {
            auto low = lower_bound(loc[x].begin(), loc[x].end(), make_pair(y, 0));

            if (low == loc[x].end() || (*low).first != y)
                --low;

            cout << (*low).second << '\n';
        }
    }
}