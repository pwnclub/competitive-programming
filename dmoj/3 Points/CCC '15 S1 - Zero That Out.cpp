// CCC '15 S1 - Zero That Out
// dmoj.ca/problem/ccc15s1
// 2017-02-23
// AC in 0.06s
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    
	vector<int> boss;
	int k, num;
	
	cin >> k;

	for (int i = 0; i < k; ++i)
	{
		cin >> num;
		
		if (num == 0)
			boss.pop_back();
		else
			boss.push_back(num);
	}

	int sum = 0;

	for (auto it : boss)
		sum += it;

	cout << sum << '\n';
}