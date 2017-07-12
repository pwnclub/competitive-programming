// CCC '10 J5 - Knight Hop
// dmoj.ca/problem/ccc10j5
// 2017-07-12
// AC in 0.04s
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int board[8][8];
bool seen[8][8];
unsigned char visited[64], dist[64];
vector<int> moves[64];

int bfs(int n, int e)
{
    for (auto &it : visited) it = false;
    for (auto &it : dist) it = 100;

    list<int> q;

    visited[n] = true;
    dist[n] = 0;

    q.push_back(n);

    while (!q.empty())
    {
        n = q.front();

        if (n == e)
            return dist[n];

        q.pop_front();

        for (auto it : moves[n])
            if (!visited[it])
            {
                visited[it] = true;

                dist[it] = dist[n] + 1;

                q.push_back(it);
            }
    }
}

void spread()
{
    for(int x = 0; x < 8; ++x)
        for (int y = 0; y < 8; ++y)
        {
            if (x + 2 < 8 && y + 1 < 8 && !seen[x + 2][y + 1])
                moves[x + y * 8].push_back((x + 2) + (y + 1) * 8);

            if (x + 1 < 8 && y + 2 < 8 && !seen[x + 1][y + 2])
                moves[x + y * 8].push_back((x + 1) + (y + 2) * 8);

            if (x - 2 >= 0 && y + 1 < 8 && !seen[x - 2][y + 1])
                moves[x + y * 8].push_back((x - 2) + (y + 1) * 8);

            if (x - 1 >= 0 && y + 2 < 8 && !seen[x - 1][y + 2])
                moves[x + y * 8].push_back((x - 1) + (y + 2) * 8);

            if (x - 2 >= 0 && y - 1 >= 0 && !seen[x - 2][y - 1])
                moves[x + y * 8].push_back((x - 2) + (y - 1) * 8);

            if (x - 1 >= 0 && y - 2 >= 0 && !seen[x - 1][y - 2])
                moves[x + y * 8].push_back((x - 1) + (y - 2) * 8);

            if (x + 2 < 8 && y - 1 >= 0 && !seen[x + 2][y - 1])
                moves[x + y * 8].push_back((x + 2) + (y - 1) * 8);

            if (x + 1 < 8 && y - 2 >= 0 && !seen[x + 1][y - 2])
                moves[x + y * 8].push_back((x + 1) + (y - 2) * 8);
        }
}

int main()
{
    int xi, yi, xf, yf;
    
    cin >> xi >> yi >> xf >> yf;

    spread();

    cout << bfs((yi - 1) + (xi - 1) * 8, (yf - 1) + (xf - 1) * 8) << '\n';
}