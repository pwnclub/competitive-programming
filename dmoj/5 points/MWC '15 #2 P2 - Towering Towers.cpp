// MWC '15 #2 P2: Towering Towers
// dmoj.ca/problem/mwc15c2p2
// 2017-09-03
// AC in 0.48s
#include <iostream>
#include <stack>
using namespace std;

int arr[1000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;

    int n, h;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> h;

        arr[i] = h;

        bool found = false;

        while (!s.empty())
        {
            if (arr[s.top()] > arr[i])
            {
                cout << i - s.top() << ' ';
                found = true;
                break;
            }
            else
            {
                s.pop();
            }
        }

        if (!found)
        {
            cout << i << ' ';
        }

        s.push(i);
    }
    cout << '\n';
}