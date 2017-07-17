// CCC '12 S5 - Mouse Journey
// dmoj.ca/problem/ccc12s5
// 2017-07-17
// AC in 0.03s
#include <iostream>
using namespace std;

long long paths[26][26];
bool blocked[26][26];

int main()
{
    int r, c, k, x, y;

    cin >> r >> c >> k;

    for (int i = 0; i < k; ++i)
    {
        cin >> x >> y;

        blocked[x][y] = true;
    }

    paths[1][1] = 1;

    for (int i = 1; i <= r; ++i)
        for (int j = 1; j <= c; ++j)
            if (!blocked[i][j])
            {
                paths[i][j] += paths[i][j - 1];
                paths[i][j] += paths[i - 1][j];
            }

    cout << paths[r][c] << '\n';
}