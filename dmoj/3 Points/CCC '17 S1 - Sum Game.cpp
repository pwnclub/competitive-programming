// CCC '17 S1 - Sum Game
// dmoj.ca/problem/ccc17s1
// 2017-06-25
// AC in 0.15s
#include <iostream>
#include <vector>
using namespace std;

int n, num, sum = 0, sum2 = 0, sol = 0, f[100001], s[100001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		sum += num;
		f[i] = sum;
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		sum2 += num;
		if(sum2 == f[i])
		    sol = i + 1;
	}
	
	cout << sol << '\n';
}