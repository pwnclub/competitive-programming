// CCC '04 J2 - Terms of Office
// dmoj.ca/problem/ccc04j2
// 2017-02-23
// AC in 0.03s
#include <iostream>
using namespace std;

int main()
{
    
    int x, y;
    
    cin >> x >> y;
    
    while(x <= y)
    {
        cout << "All positions change in year " << x << '\n';
        
        x += 60;
    }
}