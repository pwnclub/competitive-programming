// CCC '00 S4 - Golf
// dmoj.ca/problem/ccc00s4
// 2017-07-15
// AC in 0.02s
#include <iostream>
#include <algorithm>
using namespace std;

int f, c, sol, clubs[100], dist[5280];
bool seen[5280];

int hit(int n)
{
    if (n > f)
        return 10000;
    else if (n == f)
        return 0;
    else if (seen[n])
        return dist[n];

    int min = 10000;
    
    for (int i = 0; i < c; ++i)
    {
        int land = hit(n + clubs[i]);
        if (land < 10000)
            min = land;
    }

    dist[n] = min + 1;
    seen[n] = true;

    return dist[n];
}

int main()
{
    cin >> f >> c;

    for (int i = 0; i < c; ++i)
        cin >> clubs[i];

    sort(clubs, clubs + c);

    sol = hit(0);

    if (sol > 10000)
        cout << "Roberta acknowledges defeat.\n";
    else
        cout << "Roberta wins in " << sol << " strokes.\n";
}