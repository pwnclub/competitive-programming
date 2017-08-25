// COCI '08 Contest 6 #1 Buka
// dmoj.ca/problem/coci08c6p1
// 2017-08-16
// AC in 0.03s
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a, b;
    char o;
 
    cin >> a >> o >> b;

    if (o == '*')
    {
        cout << 1;

        for (int i = a.length() + b.length() - 3; i >= 0; --i)
            cout << 0;
    }
    else
    {
        if (a.length() > b.length())
        {
            a[a.length() - b.length()] = '1';
            cout << a;
        }
        else if (da.length() < b.length())
        {
            b[b.length() - a.length()] = '1';
            cout << b;
        }
        else
        {
            a[0] = '2';
            cout << a;
        }
    }
}