// CCC '09 S5 - Wireless
// dmoj.ca/problem/ccc09s5
// 2017-08-04
// AC in 1.09s
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int city[1001][30001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n, k, x, y, r, b, max_bit = 0, num_shop = 0;

    cin >> n >> m >> k;

    for (int i = 0; i < k; ++i)
    {
        cin >> x >> y >> r >> b;

        city[x][max(1, y - r)] += b;
        if (y + r + 1 <= n)
            city[x][y + r + 1] -= b;

        for (int j = 1; j <= r; ++j)
        {
            int range = sqrt(pow(r, 2) - pow(j, 2));

            if(x + j <= m)
                city[x + j][max(1, y - range)] += b;
            if (x - j >= 1)
                city[x - j][max(1, y - range)] += b;

            if (x + j <= m && y + range + 1 <= n)
                city[x + j][y + range + 1] -= b;
            if (x - j >= 1 && y + range + 1 <= n)
                city[x - j][y + range + 1] -= b;
        }
    }

    for (int i = 1; i <= m; ++i)
        for (int j = 2; j <= n; ++j)
        {
            city[i][j] += city[i][j - 1];

            if (city[i][j] > max_bit)
            {
                max_bit = city[i][j];
                num_shop = 1;
            }
            else if (city[i][j] == max_bit)
                ++num_shop;
        }

    cout << max_bit << '\n' << num_shop << '\n';
}