// CCC '07 J5 - Keep on Truckin'
// dmoj.ca/problem/ccc07j5
// 2017-07-15
// AC in 0.02s
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int a, b, n, m, sol = 0;
int motels [35] = { 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000 };

void travel(int c)
{
    if (c == 7000)
    {
        ++sol;
        return;
    }

    for (int i = 0; i < 14 + n; ++i)
        if (c + a <= motels[i] && c + b >= motels[i])
            travel(motels[i]);
    
    return;
}

int main()
{
    cin >> a >> b >> n;

    for (int i = 0; i < n; ++i)
        cin >> motels[14 + i];

    sort(motels, motels + 35);

    travel(0);

    cout << sol << '\n';
}