// CCC '04 J3 - Smile with Smiles
// dmoj.ca/problem/ccc04j3
// 2017-02-23
// AC in 0.01s
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> nv, mv;
    int n, m;
    string a;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; ++i)
        cin >> a, nv.push_back(a);
    
    for(int i = 0; i < m; ++i)
        cin >> a, mv.push_back(a);
    
    for(auto it: nv)
        for(auto ot: mv)
            cout << it << " as " << ot << '\n';
}