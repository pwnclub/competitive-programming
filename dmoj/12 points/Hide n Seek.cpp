// Hide n Seek
// dmoj.ca/problem/gfssoc1s3
// 2017-07-13
// AC in 0.04s
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

vector<int> connect[401], paths, important_pos(1);
vector<unsigned char> visited(401), dist(401);
char map[20][20];
int travel[6][6], n, m, t, sol = 2000000000;

int bfs(int n, int e)
{
    for (auto &it : visited) it = false;
    for (auto &it : dist) it = -1;

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

        for (auto it : connect[n])
            if (!visited[it])
            {
                visited[it] = true;

                dist[it] = dist[n] + 1;

                q.push_back(it);
            }
    }
    return -1;
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m >> t;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> map[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            if (map[i][j] != 'X')
            {
                if (i != 0 && map[i - 1][j] != 'X')
                    connect[i * m + j].push_back((i - 1) * m + j);

                if (i != n - 1 && map[i + 1][j] != 'X')
                    connect[i * m + j].push_back((i + 1) * m + j);

                if (j != 0 && map[i][j - 1] != 'X')
                    connect[i * m + j].push_back(i * m + j - 1);

                if (j != m - 1 && map[i][j + 1] != 'X')
                    connect[i * m + j].push_back(i* m + j + 1);
            }

            if (map[i][j] == 'G')
                important_pos[0] = i * m + j;

            if (map[i][j] == 'H')
                important_pos.push_back(i * m + j);
        }

    for (int i = 0; i < t + 1; ++i)
        for (int j = 0; j < t + 1; ++j)
            travel[i][j] = bfs(important_pos[i], important_pos[j]);

    for (int i = 0; i < t + 1; ++i)
        paths.push_back(i);

    do
    {
        int path = 0;
        for (int i = 1; i <= t; ++i)
            path += (travel[paths[i]][paths[i - 1]]);
        if (path < sol)
            sol = path;
    } while (next_permutation(paths.begin() + 1, paths.end()));

    cout << sol << '\n';
}