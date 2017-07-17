// TLE '16 Contest 3 P4 - Gaussian Elimination
// dmoj.ca/problem/tle16c3p4
// 2017-07-17
// AC in 0.16s
#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    cout << (((n + m) % 2 == 1 || n == 1 || m == 1) ? "First\n" : "Second\n");
}