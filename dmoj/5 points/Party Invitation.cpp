// Party Invitation
// dmoj.ca/problem/ccc14s1
// 2017-02-25
// AC in 0.02s
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k, m;
    vector<int> friends;
    cin >> k >> m;

    for (int i = 1; i <= k; ++i)
        friends.push_back(i);

    for (int i = 0; i < m; ++i)
    {
        int remove_every;
        cin >> remove_every;
        for (int j = remove_every - 1; j < friends.size(); j += (remove_every - 1))
            friends.erase(friends.begin() + j);
    }

    for (int i = 0; i < friends.size(); ++i)
        cout << friends[i] << endl;
}