// CCC '15 J1 - Special Day
// dmoj.ca/problem/ccc15j1
// 2017-02-22
// AC in 0.03s
#include <iostream>
using namespace std;

int main()
{
    int m, d;
    
    cin >> m >> d;
    
    if(m == 2)
    {
        if(d < 18)
            cout << "Before\n";
        else if(d > 18)
            cout << "After\n";
        else
            cout << "Special\n";
    }
    else if(m == 1)
        cout << "Before\n";
    else
        cout << "After\n";
}