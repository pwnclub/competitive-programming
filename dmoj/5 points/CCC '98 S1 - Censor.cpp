// CCC '98 S1 - Censor
// dmoj.ca/problem/ccc98s1
// 2017-06-24
// AC in 0.01s
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int n;
	string s;
	
	cin >> n;
	
	cin.ignore();
	
	for (int i = 0; i < n; ++i)
	{
		vector<string> ss;
		
		getline(cin, s);
		
		istringstream iss(s);
		
		for (string s; iss >> s;)
			ss.push_back(s);
			
		for (auto it : ss)
		{
			if (it.size() == 4)
				cout << "**** ";
			else
				cout << it << ' ';
		}
		cout << '\n';
	}
}