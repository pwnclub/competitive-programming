// CCC '11 S2 - Multiple Choice
// dmoj.ca/problem/ccc11s2
// 2017-02-23
// AC in 0.02s
#include <iostream>
using namespace std;

char st[10001], an[10001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, sol = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i)
        cin >> st[i];
    
    for(int i = 0; i < n; ++i)
        cin >> an[i];
    
    for(int i = 0; i < n; ++i)
        if(st[i] == an[i])
            ++sol;
            
    cout << sol << '\n';
}