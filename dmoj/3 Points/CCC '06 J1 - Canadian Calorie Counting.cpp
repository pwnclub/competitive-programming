// CCC '06 J1 - Canadian Calorie Counting
// dmoj.ca/problem/ccc06j1
// 2017-02-23
// AC in 0.02s
#include <iostream>
using namespace std;

int main()
{
    int b, s, d, de, cal = 0;
    
    cin >> b >> s >> d >> de;
    
    if(b == 1)
        cal += 461;
    else if(b == 2)
        cal += 431;
    else if(b == 3)
        cal += 420;
        
    if(d == 1)
        cal += 130;
    else if(d == 2)
        cal += 160;
    else if(d == 3)
        cal += 118;
        
    if(s == 1)
        cal += 100;
    else if(s == 2)
        cal += 57;
    else if(s == 3)
        cal += 70;
        
    if(de == 1)
        cal += 167;
    else if(de == 2)
        cal += 266;
    else if(de == 3)
        cal += 75;
        
    cout << "Your total Calorie count is " << cal << ".\n";
}