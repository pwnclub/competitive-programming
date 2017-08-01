// Fast Factorial Calculator
// dmoj.ca/problem/factoria
// 2017-08-01
// AC in 0.01s
#include <iostream>
using namespace std;

#define MOD 4294967296
#define ll unsigned long long

int factorial(ll n)
{
    if (n <= 1)
        return 1;

    return (n * factorial(n - 1)) % MOD;
}

int main()
{
    ll n, t, sol;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        
        if (t <= 33)
        {
            sol = 1;
            ++t;

            while (--t)
            {
                sol *= t;
                sol %= MOD;
            }

            cout << sol << '\n';
        }
        else
            cout << 0 << '\n';
    }
}