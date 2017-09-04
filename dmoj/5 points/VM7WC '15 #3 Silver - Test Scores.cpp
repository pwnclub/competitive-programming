// VM7WC '15 #3 Silver - Test Scores
// dmoj.ca/problem/vmss7wc15c3p2
// 2017-06-24
// AC in 0.09s

#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];

int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0);
	
	int n, k, sol = 0;
	vector<int> v;

	cin >> n >> k;

	for (int i = 0; i < n; ++i)
	    cin >> arr[i];

	sort(arr, arr + n);

	for (int i = n - 1; i >= 0; --i)
	{
		if (arr[i] <= 0 || i == n - 1- k)
			break;

		sol += arr[i];
	}

	cout << sol << '\n';
}