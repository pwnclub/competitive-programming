// CCC '16 J2 - Magic Squares
// dmoj.ca/problem/ccc16j2
// 2017-02-24
// AC in 0.03s
#include <iostream>
using namespace std;

int magic[4][4];
int sum = 0;

int main()
{
    for (int y = 0; y < 4; ++y)
        for (int x = 0; x < 4; ++x)
            cin >> magic[x][y];

    sum = magic[0][0] + magic[1][0] + magic[2][0] + magic[3][0];

    for (int y = 1; y < 4; ++y)
        if (magic[0][y] + magic[1][y] + magic[2][y] + magic[3][y] != sum)
        {
            cout << "not magic\n";
            return 0;
        }

    for (int x = 0; x < 4; ++x)
        if (magic[x][0] + magic[x][1] + magic[x][2] + magic[x][3] != sum)
        {
            cout << "not magic\n";
            return 0;
        }

    cout << "magic\n";
}