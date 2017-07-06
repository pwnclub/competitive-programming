// 16 BIT S/W ONLY
// dmoj.ca/problem/16bitswonly
// 2017-02-24
// AC in 0.04s
#include <iostream>
using namespace std;

int main() 
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n; 
    long long a, b, p;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i)
    {
        cin >> a >> b >> p;
        
        if(a*b == p)
            cout << "POSSIBLE DOUBLE SIGMA\n";
        else
            cout << "16 BIT S/W ONLY\n";
    }
}