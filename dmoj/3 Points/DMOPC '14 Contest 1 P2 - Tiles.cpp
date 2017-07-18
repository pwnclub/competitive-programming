// DMOPC '14 Contest 1 P2 - Tiles
// dmoj.ca/problem/dmopc14c1p2
// 2017-02-23
// AC in 0.04s
#include <iostream>
using namespace std;

int main() 
{
    int w, l, t;
    
    cin >> w >> l >> t;
    
    cout << (w/t) * (l/t) << '\n';
}