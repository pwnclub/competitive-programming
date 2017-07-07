// CCC '05 J2 - RSA Numbers
// dmoj.ca/problem/ccc05j2
// 2017-02-24
// AC in 0.01s
#include <iostream>
using namespace std;

int main() 
{
    int a, b, sol = 0;
    
    cin >> a >> b;
    
    for(int i = a; i <= b; ++i)
    {
        int d = 0;
        
        for(int j = 1; j <= i; ++j)
            if(i % j == 0)
                ++d;
                
        if(d == 4)
            ++sol;
    }
    
    cout << "The number of RSA numbers between " << a << " and " << b << " is " << sol << '\n';
}