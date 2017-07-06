// CCC '14 J1 - Triangle Times
// dmoj.ca/problem/ccc14j1
// 2017-02-22
// AC in 0.02s
#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3;
    
    cin >> a1 >> a2 >> a3;
    
    if(a1 == 60 && a2 == 60 && a3 == 60)
        cout << "Equilateral\n";
    else if(a1 + a2 + a3 != 180)
        cout << "Error" << endl;
    else if(a1 == a2 || a2 == a3 || a1 == a3)
        cout << "Isosceles\n";
    else
        cout << "Scalene\n";
}