// Back to School '16: Paradox
// dmoj.ca/problem/bts16p2
// 2017-07-14
// AC in 0.05s
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<bool> tf;
    int c, comm, setsize;
    bool state;

    cin >> c;

    for (int i = 0; i < c; ++i)
    {
        cin >> comm;

        if (comm != 4)
            cin >> boolalpha >> state;

        setsize = tf.size();
        
        if (comm == 1)
        {
            tf.insert(state);

            cout << boolalpha << (tf.size() > setsize) << '\n';
        }
        else if (comm == 2)
        {
            auto it = tf.find(state);

            if (it != tf.end())
                tf.erase(it);

            cout << boolalpha << (tf.size() < setsize) << '\n';
        }
        else if (comm == 3)
        {
            auto it = tf.find(state);

            if (it == tf.end())
                cout << -1 << '\n';
            else
                cout << noboolalpha << *it << '\n';
        }
        else
        {
            if (setsize == 1)
                cout << boolalpha << *tf.begin() << '\n';
            else if (setsize == 2)
                cout << "false true\n";
        }
    }
}