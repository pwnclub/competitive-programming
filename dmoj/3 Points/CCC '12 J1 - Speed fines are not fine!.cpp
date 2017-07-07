// CCC '12 J1 - Speed fines are not fine!
// dmoj.ca/problem/ccc12j1
// 2017-02-22
// AC in 0.01s
#include <iostream>
using namespace std;

int main()
{
    int sl, s, f;
    
    cin >> sl >> s;
    
    f = s - sl;
    
    if(f >= 31)
        cout << "You are speeding and your fine is $500.\n";
    else if(f >= 21)
        cout << "You are speeding and your fine is $270.\n";
    else if(f > 0)
        cout << "You are speeding and your fine is $100.\n";
    else
        cout << "Congratulations, you are within the speed limit!\n";
}