// DMOPC '14 Contest 2 P2 - Cutting Logs
// dmoj.ca/problem/dmopc14c2p2
// 2017-02-25
// AC in 0.07s
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string n, a;
	int s = 0;
	
	cin >> n >> a;
	
	for (int i = 0; i < a.size(); ++i)
		if ((i == a.size() - 1 && a[i] == 'O' && a[i-1] == 'X') || (a[i] == 'O' && a[i + 1] != 'O'))
			++s;

	cout << s << '\n';

	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] == 'O')
			cout << 'O';
		if (i == a.size()-1 || (a[i] == 'O' && a[i + 1] == 'X'))
			cout << '\n';
	}
}