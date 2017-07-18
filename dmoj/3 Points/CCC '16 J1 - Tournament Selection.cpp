// CCC '16 J1 - Tournament Selection
// dmoj.ca/problem/ccc16j1
// 2017-02-23
// AC in 0.02s
#include <iostream>
using namespace std;

int main()
{
    int wins = 0;
    char wl;
    
    for(int i = 0; i < 6; ++i)
    {
        cin >> wl;
        
        if(wl == 'W')
            ++wins;
    }
    
    if(wins == 0)
        cout << -1 << '\n';
    else
        cout << 4 - ((wins+1)/2) << '\n';
}