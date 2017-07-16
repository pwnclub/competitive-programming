// CCC '11 S3 - Alice Through the Looking Glass
// dmoj.ca/problem/ccc11s3
// 2017-07-16
// AC in 0.06s
#include <iostream>
#include <math.h>
using namespace std;

int height(int x, int p)
{
    int sect = x / pow(5, p - 1);

    if (sect == 0 || sect == 4 || p < 1)
        return 0;
    else if (sect == 1 || sect == 3)
        return pow(5, p - 1) + height(x % (int)pow(5, p-1), p - 1);
    else
        return pow(5, p - 1) * 2 + height(x % (int)pow(5, p-1), p - 1);
}

int main()
{
    int t, m, x, y;
    
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        cin >> m >> x >> y;

        if (y < height(x, m))
            cout << "crystal\n";
        else
            cout << "empty\n";
    }
}