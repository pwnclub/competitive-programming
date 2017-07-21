// DMPOC '14 Contest 3 P1 - Not Enough Users!
// dmoj.ca/problem/dmopc14c3p1
// 2017-02-24
// AC in 0.03s
#include <iostream>
using namespace std;

int main() 
{
    int n, k, d;
    
    cin >> n >> k >> d;
    
    for(int i = 0; i < d; ++i)
        n *= k;
        
    cout << n << '\n';
}