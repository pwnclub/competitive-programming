// CCC '12 J3 - Icon Scaling
// dmoj.ca/problem/ccc12j3
// 2017-02-24
// AC in 0.02s
#include <iostream>
using namespace std;

int main()
{
	int k;
	
	cin >> k;
	
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < k; ++j) cout << '*';
		for (int j = 0; j < k; ++j) cout << 'x';
		for (int j = 0; j < k; ++j) cout << '*';
		cout << '\n';
	}
	
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < k; ++j) cout << ' ';
		for (int j = 0; j < k; ++j) cout << 'x';
		for (int j = 0; j < k; ++j) cout << 'x';
		cout << '\n';
	}
	
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < k; ++j) cout << '*';
		for (int j = 0; j < k; ++j) cout << ' ';
		for (int j = 0; j < k; ++j) cout << '*';
		cout << '\n';
	}
	return 0;
}