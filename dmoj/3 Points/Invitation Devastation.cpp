// Invitation Devastation
// dmoj.ca/problem/year2015p1
// 2017-06-24
// AC in 0.02s
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, name;
	int n;
	
	getline(cin, s);
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> name;
		
		for (auto it : s)
		{
			if (it == '>')
				cout << name;
			else
				cout << it;
		}
		
		cout << '\n';
	}
}