// CCC '15 J2 - Happy or Sad
// dmoj.ca/problem/ccc15j2
// 2017-02-23
// AC in 0.02s
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char c;
    int h = 0, s = 0;
    vector<int> a;
    
    while(cin >> c)
        a.push_back(c);
        
    for(int i = 2; i < a.size(); ++i)
    {
        if(a[i] == ')' && a[i-1] == '-' && a[i-2] == ':')
            ++h;
        else if(a[i] == '(' && a[i-1] == '-' && a[i-2] == ':')
            ++s;
    }
    
    if(h > s)
        cout << "happy\n";
    else if(s > h)
        cout << "sad\n";
    else if(s == h && s != 0)
        cout << "unsure\n";
    else
        cout << "none\n";
}