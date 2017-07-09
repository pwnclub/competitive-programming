// CCO '00 P1 - Subsets
// dmoj.ca/problem/cco00p1
// 2017-07-09
// AC in 0.02s
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<vector<char>> sets(26, vector<char>());
bool printthis[26];
int main()
{
    int n;
    char fc, sc;
    string s;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i)
    {
        getline(cin, s);

        fc = s[0];
        sc = s.back();

        if(fc != sc)
            sets[(int)fc - 65].push_back(sc);

        printthis[(int)fc - 65] = true;

        if (sc <= 'Z')
            printthis[(int)sc - 65] = true;
    }

    for (int i = 0; i < 26; ++i)
    {
        vector<char> previously_seen;

        for (int j = 0; j < sets[i].size(); ++j)
        {
            if (sets[i][j] <= 'Z')
            {
                char subset = sets[i][j];

                sets[i].erase(sets[i].begin() + j);
                
                for (int k = 0; k < sets[(int)subset - 65].size(); ++k)
                {
                    auto it = find(previously_seen.begin(), previously_seen.end(), sets[(int)subset - 65][k]);

                    if(sets[(int)subset-65][k] != char(i + 65) && (previously_seen.empty() || it == previously_seen.end()))
                    {
                        previously_seen.push_back(sets[(int)subset-65][k]);
                        sets[i].insert(sets[i].begin() + j, sets[(int)subset - 65][k]);
                    }
                }

                --j;

                previously_seen.push_back(subset);
            }
        }
    }

    for (int i = 0; i < 26; ++i)
        if (printthis[i])
        {
            sort(sets[i].begin(), sets[i].end());

            cout << char(i + 65) << " = {";

            if (!sets[i].empty())
                cout << sets[i][0];

            for (int j = 1; j < sets[i].size(); ++j)
                if (sets[i][j] != sets[i][j - 1])
                    cout << ',' << sets[i][j];

            cout << "}\n";
        }
}