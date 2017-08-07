// THICC '17 P1 - Carol's Carnivorous Plants
// dmoj.ca/problem/thicc17p1
// 2017-08-05
// AC in 0.07s
#include <iostream>
#include <algorithm>
using namespace std;

#define MOD 1000000007
#define ll long long

int plants[101];

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
    int n, m, cur_person = 1, cur_pow = 0;
    ll sol = 0;

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        cin >> plants[i];

    sort(plants, plants + n);

    for (int i = n - 1; i >= 0; --i)
    {
        sol += powa(plants[i], cur_pow);
        sol %= MOD;
        ++cur_person;

        if (cur_person > m)
        {
            cur_person = 1;
            ++cur_pow;
        }
    }

    cout << sol << '\n';
}