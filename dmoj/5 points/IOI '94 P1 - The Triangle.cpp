// IOI '94 P1 - The Triangle
// dmoj.ca/problem/ioi94p1
// 2017-02-23
// AC in 0.02s
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> p;

void find_path(int curr_row)
{
	for (int i = 0; i < p[curr_row].size(); ++i)
		p[curr_row][i] += max(p[curr_row + 1][i], p[curr_row + 1][i + 1]);

	if (curr_row == 0)
		return;

	find_path(curr_row - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    
	cin >> n;
	
	p.resize(n);

	for (int i = 0; i < n; ++i)
		for (int j = 0; j <= i; ++j)
		{
			int num;
			cin >> num;
			p[i].push_back(num);
		}

	if (p.size() > 1)
		find_path(n - 2);
	cout << p[0][0] << '\n';
}