// CCC '09 J1 - ISBN
// dmoj.ca/problem/ccc09j1
// 2017-02-23
// AC in 0.01s
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    
    cin >> a >> b >> c;
    
    cout << "The 1-3-sum is " << 91 + a + c + (b*3) << '\n';
}