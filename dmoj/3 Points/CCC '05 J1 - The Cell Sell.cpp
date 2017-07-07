// CCC '05 J1 - The Cell Sell
// dmoj.ca/problem/ccc05j1
// 2017-02-23
// AC in 0.01s
#include <iostream>
using namespace std;

int main()
{
    int d, e, w, da, db, a = 0, b = 0;
    
    cin >> d >> e >> w;
    
    if(d >= 100)
        da = d- 100;
    else
        da = 0;
    if(d >= 250)
        db = d- 250;
    else
        db = 0;
        
    a += 25*da + 15*e + 20*w;
    b += 45*db + 35*e + 25*w;
    
    cout << "Plan A costs " << a/100 << '.' << a%100 << '\n';
    cout << "Plan B costs " << b/100 << '.' << b%100 << '\n';
    
    if(a > b)
        cout << "Plan B is cheapest.\n";
    else if(b > a)
        cout << "Plan A is cheapest.\n";
    else
        cout << "Plan A and B are the same price.\n";
}