// TLE '15 P5 - Prefix Sum Array
// dmoj.ca/problem/tle15p5
// 2017-08-03
// AC in 0.48s
#include <iostream>
using namespace std;

#define MOD 1000000007
#define ll long long

ll sol[2001], coef[2001];

int powa(ll x, ll y)
{
    if (y == 0)
        return 1;

    if (y % 2 == 0)
        return powa((x * x) % MOD, y / 2);
    else
        return (x * powa((x * x) % MOD, y / 2)) % MOD;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;

    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> sol[i];

    cin >> m;

    --m;

    coef[0] = 1;

    for (int i = 1; i < n; ++i)
        coef[i] = ((coef[i - 1] * (m + i) % MOD) * powa(i, MOD - 2)) % MOD;
    
    for (int i = 0; i < n; ++i)
    {
        ll sum = 0;

        for (int j = 0; j <= i; ++j)
        {
            sum += (coef[i - j] * sol[j]) % MOD;
            sum %= MOD;
        }

        cout << sum << ' ';
    }

    cout << '\n';
}