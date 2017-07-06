// A Plus B
// dmoj.ca/problem/aplusb
// 2017-02-22
// AC in 0.04s
#include <iostream>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n, a, b;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }
}