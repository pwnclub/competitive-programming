// DMOPC '15 Contest 1 P1 - Itami and Manga
// dmoj.ca/problem/dmopc15c1p1
// 2017-02-25
// AC in 0.04s
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double n, h = -1, b;
    string s, a;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        
        if(b > h)
        {
            h = b;
            s = a;
        }
    }
    
    cout << s << '\n';
}