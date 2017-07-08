// Binary
// dmoj.ca/problem/binary
// 2017-02-25
// AC in 0.02s
#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;

int main()
{
    int n, a, s;
    string binary;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;

        s = int(log(a) / log(16)) + 1;
        if (a == 0) s = 1;
        binary = bitset<32>(a).to_string();

        for (int j = s; j >= 1; --j)
        {
            for (int i = 0; i < 4; ++i)
                cout << binary[32 - j * 4 + i];
            cout << ' ';
        }
        cout << '\n';
    }
}