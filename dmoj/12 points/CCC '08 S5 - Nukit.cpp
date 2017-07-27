// CCC '08 S5 - Nukit
// dmoj.ca/problem/ccc08s5
// 2017-07-27
// AC in 0.08s
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> moves = { { 2, 1, 0, 2 }, { 1, 1, 1, 1 }, { 0, 0, 2, 1 }, { 0, 3, 0, 0 }, { 1, 0, 0, 1 } };
bool winning_pos[31][31][31][31];

bool losing_pos(int a, int b, int c, int d)
{
    if (a < 0 || b < 0 || c < 0 || d < 0)
        return false;
    return !(winning_pos[a][b][c][d]);
}

int main()
{
    int n, a, b, c, d, max_value = 0;
    vector<vector<int>> quer;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b >> c >> d;
        if (a > max_value)
            max_value = a;
        if (b > max_value)
            max_value = b;
        if (c > max_value)
            max_value = c;
        if (d > max_value)
            max_value = d;
        quer.push_back({ a, b, c, d });
    }
    
    for (int i = 0; i <= max_value; ++i)
        for (int j = 0; j <= max_value; ++j)
            for (int k = 0; k <= max_value; ++k)
                for (int l = 0; l <= max_value; ++l)
                    for (int m = 0; m <= 4; ++m)
                        if (losing_pos(i - moves[m][0], j - moves[m][1], k - moves[m][2], l - moves[m][3]))
                            winning_pos[i][j][k][l] = true;
                            
    for (int i = 0; i < n; ++i)
    {
        if (winning_pos[quer[i][0]][quer[i][1]][quer[i][2]][quer[i][3]])
            cout << "Patrick\n"; 
        else
            cout << "Roland\n";
    }
}