// Prime Factorization
// dmoj.ca/problem/primefactor
// 2017-07-27
// AC in 0.06s
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> p;

void gen_primes(int n)
{
    vector<bool> a(n + 1, true);

    for (int i = 2; i <= sqrt(n); ++i)
        if (a[i] == true)
            for (int j = i*i; j <= n; j += i)
                a[j] = false;

    for (int i = 2; i < a.size(); ++i)
        if (a[i] == true)
            p.push_back(i);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, max_value = 0;

    cin >> n;

    vector<int> q(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> q[i];
        
        if(q[i] > max_value)
            max_value = q[i];
    }
        
    gen_primes(sqrt(max_value));

    for (int i = 0; i < n; ++i)
    {
        m = q[i];

        for (int j = 0; j < p.size(); ++j)
        {
            while (m % p[j] == 0)
            {
                cout << p[j] << ' ';
                m /= p[j];
            }

            if (p[j] > m)
                break;
        }

        if (m != 1)
            cout << m << ' ';

        cout << '\n';
    }
}