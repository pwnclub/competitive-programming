// CCC '03 S1 - Snakes and Ladders
// dmoj.ca/problem/ccc03s1
// 2017-02-24
// AC in 0.01s
#include <iostream>
using namespace std;

int main()
{
    int m, pos = 1;
    
    while(true)
    {
        cin >> m;
        
        if(m == 0)
        {
            cout << "You Quit!\n";
            return 0;
        }
        
        if(pos + m <= 100)
            pos += m;
            
        switch(pos)
        {
            case 54: pos = 19;
                break;
            case 90: pos = 48;
                break;
            case 99: pos = 77;
                break;
            case 9: pos = 34;
                break;
            case 40: pos = 64;
                break;
            case 67: pos = 86;
                break;
            default:
                break;
        }
        
        cout << "You are now on square " << pos << '\n';
        
        if(pos >= 100)
        {
            cout << "You Win!\n";
            return 0;
        }
    }
}