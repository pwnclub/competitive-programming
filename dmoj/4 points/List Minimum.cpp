// List Minimum
// dmoj.ca/problem/bf1
// 2017-02-22
// AC in 0.01s
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, num;
    vector<int> l;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i)
    {
        cin >> num;
        l.push_back(num);
    }
    
    sort(l.begin(), l.end());
    
    for(auto it: l)
        cout << it << '\n';
}