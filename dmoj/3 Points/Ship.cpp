// Ship
// dmoj.ca/problem/seed1
// 2017-03-05
// AC in 0.01s
#include <iostream>
using namespace std;

int main()
{
    int b = 0, f = 0, t = 0, l = 0, c = 0;
    char ca;
    
    while(cin >> ca)
        switch(ca)
        {
            case 'B': b++; 
                      break;
            case 'F': f++; 
                      break;
            case 'T': t++; 
                      break;
            case 'L': l++; 
                      break;
            case 'C': c++; 
                      break;
        }
        
    if(b != 0 && f != 0 && t != 0 && l != 0 && c != 0)
        cout << "NO MISSING PARTS" << endl;
    else
    {
        if(b == 0) cout << 'B' << endl;
        if(f == 0) cout << 'F' << endl;
        if(t == 0) cout << 'T' << endl;
        if(l == 0) cout << 'L' << endl;
        if(c == 0) cout << 'C' << endl;
    }
}