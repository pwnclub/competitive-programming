// CCC '13 S2 - Bridge Transport
// dmoj.ca/problem/ccc13s2
// 2017-02-22
// AC in 0.08s
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int w, n, train, max_weight = 0, max = 0, counter = 0;
	vector<int> bridge;
    
	cin >> w >> n;

	for(int i = 0; i < n; ++i)
	{
		if (max == 4)
		{
			max_weight -= bridge[0];
			bridge.erase(bridge.begin());
			max--;
		}
		
		cin >> train;

		if (max_weight + train > w)
			break;

		bridge.push_back(train);
		
		++counter;
		++max;
		max_weight += train;
	}

	cout << counter << '\n';
}