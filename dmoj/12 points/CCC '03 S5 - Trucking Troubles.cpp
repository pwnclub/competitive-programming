// CCC '03 S5 - Trucking Troubles 
// dmoj.ca/problem/ccc03s5
// 2017-07-18
// AC in 0.44s
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

bool vis[10001];
int lweight = 0, mweight = 50000, hweight = 100000, dest_seen = 0, c, r, d, x, y, w;
vector<pair<int, int>> cities[10001];
int dest[10001];

bool bfs(int n, int tweight)
{
    for (auto &it : vis) it = false;

    list<int> q;

    vis[n] = true;

    q.push_back(n);

    while (!q.empty())
    {
        n = q.front();

        if (dest_seen == d)
            return true;

        q.pop_front();

        for (auto it : cities[n])
            if (!vis[it.first] && tweight <= it.second)
            {
                vis[it.first] = true;

                auto dc = find(dest, dest + d, it.first);
                if (dc != dest + d)
                    ++dest_seen;

                q.push_back(it.first);
            }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> c >> r >> d;

    for (int i = 0; i < r; ++i)
    {
        cin >> x >> y >> w;
        cities[x].push_back(make_pair(y, w));
        cities[y].push_back(make_pair(x, w));
    }

    for (int i = 0; i < d; ++i)
        cin >> dest[i];

    while (lweight + 1 < hweight)
    {
        mweight = (lweight + hweight) / 2;

        if (bfs(1, mweight))
            lweight = mweight;
        else
            hweight = mweight;

        dest_seen = 0;
    }
    cout << lweight << '\n';
}