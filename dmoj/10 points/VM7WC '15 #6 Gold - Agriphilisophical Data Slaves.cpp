// VM7WC '15 #6 Gold - Agriphilisophical Data Slaves
// dmoj.ca/problem/vmss7wc15c6p3
// 2017-07-12
// AC in 1.00s
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> all[400001];
int sums[400001];

int sum_up(int n)
{
    for (auto it : all[n])
        sums[n] += sum_up(it);

    return sums[n];
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n, ds, sup;

    cin >> n;

    for (int i = 0; i < n-1; ++i)
    {
        cin >> sup >> ds;
        all[sup].push_back(ds);
    }

    for (int i = 1; i <= n; ++i)
        cin >> sums[i];

    sum_up(1);

    cout << *max_element(sums + 1, sums + n + 1) << '\n';
}