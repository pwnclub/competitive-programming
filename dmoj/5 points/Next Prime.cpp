// Next Prime
// dmoj.ca/problem/bf3
// 2017-02-24
// AC in 0.04s
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int n;
    
    cin >> n;
    
    if (n <= 2)
        cout << 2 << endl;
    else
        for (int i = n; ;++i)
        {
            bool isprime = true;
            for (int j = 2; j <= sqrt(i); ++j)
                if (i % j == 0)
                {
                    isprime = false;
                    break;
                }
                    
            if (isprime)
            {
                cout << i << '\n';
                break;
             }
        }
}
