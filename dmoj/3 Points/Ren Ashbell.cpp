// Ren Ashbell
// dmoj.ca/problem/stnbd1
// 2017-07-06
// AC in 0.03s
#include <iostream>
using namespace std;

int main()
{
    int n, ren_pow, current_pow;
    bool ren_strongest = true;
    
    cin >> n >> ren_pow;
    
    for(int i = 0; i < n-1; ++i)
    {
        cin >> current_pow;
        if(current_pow >= ren_pow)
        {
            ren_strongest = false;
            break;
        }
    }
    
    if(ren_strongest)
        cout << "YES\n";
    else
        cout << "NO\n";
}