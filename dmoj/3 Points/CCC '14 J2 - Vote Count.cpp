// CCC '14 J2 - Vote Count
// dmoj.ca/problem/ccc14j2
// 2017-02-23
// AC in 0.03s
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ab;
    int v, a = 0, b = 0;
    
    cin >> v >> ab;
    
    for(int i = 0; i < v; ++i)
    {
        if(ab[i] == 'A')
            ++a;
        else
            ++b;
    }
    
    if(a > b)
        cout << "A\n";
    else if(b > a)
        cout << "B\n";
    else
        cout << "Tie\n";
}