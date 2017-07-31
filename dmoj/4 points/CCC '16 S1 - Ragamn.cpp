// CCC '16 S1 - Ragaman
// dmoj.ca/problem/ccc16s1
// 2017-02-25
// AC in 0.07s
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> a(26), b(26);

int main()
{
    string f, s;

    cin >> f >> s;

    for (int i = 0; i < f.size(); ++i)
    {
        ++a[int(f[i]) - 97];
        if(s[i] != '*')
            ++b[int(s[i]) - 97];
    }

    for (int i = 0; i < 26; ++i)
    {
        if (b[i] > a[i])
        {
            cout << "N\n";
            break;
        }
        if (i == 25)
            cout << "A\n";
    }
}