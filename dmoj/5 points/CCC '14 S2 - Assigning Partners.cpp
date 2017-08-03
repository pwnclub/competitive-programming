// CCC '14 S2 - Assigning Partners
// dmoj.ca/problem/ccc14s2
// 2017-02-25
// AC in 0.03s
#include <iostream>
#include <string>
using namespace std;

string names[2][30];

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << "bad\n";
        return 0;
    }

    for (int i = 0; i < n; ++i)
        cin >> names[0][i];

    for (int i = 0; i < n; ++i)
    {
        cin >> names[1][i];

        if (names[1][i] == names[0][i])
        {
            cout << "bad\n";
            return 0;
        }
    }

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if(names[0][i] == names[1][j])
                if (names[1][i] != names[0][j])
                {
                    cout << "bad\n";
                    return 0;
                }
    
    cout << "good\n";
}