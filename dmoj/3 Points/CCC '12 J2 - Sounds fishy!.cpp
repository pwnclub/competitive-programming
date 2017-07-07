// CCC '12 J2 - Sounds fishy!
// dmoj.ca/problem/ccc12j2
// 2017-02-23
// AC in 0.02s
#include <iostream>
using namespace std;

int main()
{
    int a, s, d, f;
    
    cin >> a >> s >> d >> f;
    
    if(a < s && s < d && d < f)
        cout << "Fish Rising" << endl;
    else if(a > s && s > d && d > f)
        cout << "Fish Diving" << endl;
    else if(a == s && s == d && d == f)
        cout << "Fish At Constant Depth" << endl;
    else
        cout << "No Fish" << endl;
}