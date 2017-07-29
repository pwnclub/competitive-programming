// Royal Guard
// dmoj.ca/problem/mockccc15j5
// 2017-07-28
// AC in 0.70s
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, x, y, nx, ny, const_var;
    long long sol = 0;
    bool check_x;
    vector<pair<int, int>> bu_x, bu_y;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        
        bu_x.push_back(make_pair(x, y));
        bu_y.push_back(make_pair(y, x));
    }

    sort(bu_x.begin(), bu_x.end());
    sort(bu_y.begin(), bu_y.end());

    cin >> m >> x >> y;


    for (int i = 1; i < m; ++i)
    {
        cin >> nx >> ny;

        if (ny == y)
        {
            check_x = true;
            const_var = y;
        }
        else
        {
            check_x = false;
            const_var = x;
        }
        
        if (check_x)
        {
            auto low = lower_bound(bu_y.begin(), bu_y.end(), make_pair(const_var, 0));
            auto upp = upper_bound(bu_y.begin(), bu_y.end(), make_pair(const_var, 1000000001));

            auto first = lower_bound(low, upp, make_pair(const_var, min(x, nx)));
            auto lastt = upper_bound(low, upp, make_pair(const_var, max(x, nx)));

            sol += lastt - first;
        }
        else
        {
            auto low = lower_bound(bu_x.begin(), bu_x.end(), make_pair(const_var, 0));
            auto upp = upper_bound(bu_x.begin(), bu_x.end(), make_pair(const_var, 1000000001));

            auto first = lower_bound(low, upp, make_pair(const_var, min(y, ny)));
            auto lastt = upper_bound(low, upp, make_pair(const_var, max(y, ny)));

            sol += lastt - first;
        }

        x = nx;
        y = ny;
    }

    cout << sol << '\n';
}