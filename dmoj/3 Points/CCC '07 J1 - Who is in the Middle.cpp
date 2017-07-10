// CCC '07 J1 - Who is in the Middle?
// dmoj.ca/problem/ccc07j1
// 2017-02-22
// AC in 0.02s
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, z;
    
    cin >> x >> y >> z;
    
    if((x >= y && x <= z) || (x >= z && x <= y))
        cout << x << '\n';
    else if((y >= x && y <= z) || (y >= z && y <= x))
        cout << y << '\n';
    else
        cout << z << '\n';
}