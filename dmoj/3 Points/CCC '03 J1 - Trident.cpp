// CCC '03 J1 - Trident
// dmoj.ca/problem/ccc03j1
// 2017-02-23
// AC in 0.01s
#include <iostream>
using namespace std;

int main()
{
    int t, s, h;
    
    cin >> t >> s >> h;
    
    for(int i = 0; i < t; ++i)
    {
        cout << '*';
        
        for(int j = 0; j < s; ++j)
            cout << ' ';
            
        cout << '*';
        
        for(int j = 0; j < s; ++j)
            cout << ' ';
            
        cout << "*\n";
    }
    
    for(int i = 0; i < (2 * s + 3); ++i)
        cout << '*';
        
    cout << '\n';
    
    for(int i = 0; i < h; ++i)
    {
        for(int j = 0; j < s + 1; ++j)
            cout << ' ';
            
        cout << '*';
        
        for(int j = 0; j < s + 1; ++j)
            cout << ' ';
            
        cout << '\n';
    }
    
    cout << '\n';
}