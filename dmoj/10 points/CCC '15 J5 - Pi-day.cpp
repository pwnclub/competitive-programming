// CCC '15 J5 - Pi-day
// dmoj.ca/problem/ccc15j5
// 2017-07-16
// AC in 0.05s
#include <iostream>
using namespace std;

int picombos[251][251];
int seen[251][251];

int solve(int a, int b)
{
    if (b > a)
        return 0;
    else if (b == 1 || a == b)
        return 1;
    else if (seen[a][b])
        return picombos[a][b];

    picombos[a][b] = solve(a - 1, b - 1) + solve(a - b, b);
    seen[a][b] = true;

    return picombos[a][b];
}

int main()
{
    int n, k;

    cin >> n >> k;

    cout << solve(n, k) << '\n';
}