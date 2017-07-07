// CCC '12 J4 - Big Bang Secrets
// dmoj.ca/problem/ccc12j4
// 2017-06-24 
// AC in 0.03s
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	
	cin >> n >> s;
	
	for (int i = 0; i < s.size(); ++i)
		cout << char((s[i] - 3 * (i + 1) - n + 65) % 26 + 'A');
	cout << '\n';
}