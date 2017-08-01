// TLE '15 P4 - Olympiads Homework
// dmoj.ca/problem/tle15p4
// 2017-08-01
// AC in 0.37s
#include <iostream>
#include <math.h>
using namespace std;

#define MOD 1000000013
#define ll long long

int powa(ll x, ll y)
{
    if (y == 0) 
        return 1;

    if (y % 2 == 0) 
        return powa((x * x) % MOD, y / 2) ;
    else 
        return (x * powa((x * x) % MOD, y / 2)) % MOD;
}

int main()
{
    ll n, sol;

    cin >> n;

    if (n == 1)
        sol = 1;
    else if (n % 8 == 0)
        sol = (powa(2, n - 2) + (powa(2, n / 2 - 1))) % MOD;
    else if (n % 8 == 4)
        sol = (powa(2, n - 2) - (powa(2, n / 2 - 1))) % MOD;
    else if (n % 8 == 1 || n % 8 == 7)
        sol = (powa(2, n - 2) + (powa(2, (n - 1) / 2 - 1))) % MOD;
    else if (n % 8 == 2 || n % 8 == 6)
        sol = (powa(2, n - 2)) % MOD;
    else
        sol = (powa(2, n - 2) - (powa(2, (n - 1) / 2 - 1))) % MOD;

    if (sol < 0)
        sol += MOD;
        
    cout << sol << '\n';
}