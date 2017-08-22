// DMOPC '14 Contest 1 P1 - Median Mark
// dmoj.ca/problem/dmopc14c1p1
// 2017-02-24
// AC in 0.04s
#include <iostream>
#include <algorithm>
using namespace std;

int m[1001];

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i)
        cin >> m[i];

    sort(m, m + n);

    if(n == 1)
        cout << m[0] << '\n';
    else if(n % 2 == 1)
        cout << m[n/2] << '\n';
    else
        cout << (m[n/2] + m[(n/2)-1] + 1) / 2 << '\n';
}