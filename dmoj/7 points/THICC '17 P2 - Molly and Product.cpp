// THICC '17 P2 - Molly and Product
// dmoj.ca/problem/thicc17p2
// 2017-08-05
// AC in 1.94s
#include <iostream>
using namespace std;

#define MOD 1000000007
#define ll long long

int main()
{
    ll n, ai, b, m;

    cin >> n >> ai >> b >> m;

    ll tot = ai, sol = 0, num = ai;

    for (int i = 1; i < n; ++i)
    {
        num = (num * b) % m;
        tot += num;
    }

    num = ai;

    for (int i = 0; i < n; ++i)
    {
        sol += (num * ((tot - num) % MOD));
        sol %= MOD;
        num = (num * b) % m;
    }

    cout << sol << '\n';
}