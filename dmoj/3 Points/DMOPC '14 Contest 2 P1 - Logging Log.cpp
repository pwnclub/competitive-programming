// DMPOC '14 Contest 2 P1 - Logging Log
// dmoj.ca/problem/dmopc14c2p1
// 2017-02-23
// AC in 0.02s
#include <iostream>
using namespace std;

int main()
{
    int n, t, d;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i)
    {
        int sum = 0;
        
        cin >> d;
        
        for(int j = 0; j < d; ++j)
        {
            cin >> t;
            sum += t;
        }
        
        if(sum == 0)
            cout << "Weekend\n";
        else
            cout << "Day " << i+1 << ": " << sum << '\n';
    }
}