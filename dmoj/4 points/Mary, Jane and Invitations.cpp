// Mary, Jane and Invitations
// dmoj.ca/problem/tsoc16c2p1
// 2017-07-14
// AC in 0.01s
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, count = 0;
    char s = ' ';
    string names, lett;

    cin >> n >> lett;

    vector<char> invit(n);

    for(int i = 0; i < lett.size(); ++i)
    {
        if (lett[i] != 'X')
        {
            invit[count] = lett[i];
            ++count;
        }
        else
        {
            int num_x = 0;
            while (lett[i] == 'X')
                ++i, ++num_x;
            invit[count - num_x] = lett[i];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> names;
        
        cout << "Dear " << names << ", ";

        if (invit[i] == 'A')
            cout << "beloved artist, I would love to have you at my party. Come to my crib on April 20th.\n";
        else if (invit[i] == 'O')
            cout << "beloved occasion enthusiast, come to my crib to celebrate this very special day.\n";
        else
            cout << "April 20th is happening again this year. Don't miss out.\n";
    }
}