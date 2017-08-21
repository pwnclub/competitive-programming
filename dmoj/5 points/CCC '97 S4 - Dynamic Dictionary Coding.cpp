// CCC '97 S4 - Dynamic Dictionary Coding
// dmoj.ca/problem/ccc97s4
// 2017-06-27
// AC in 0.00s
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <map>
using namespace std;

int main()
{
	int n;
	
	cin >> n;
	cin.ignore();
	
	for (int i = 0; i < n; ++i)
	{
		map<string, int> m;
		int loc = 1;
		
		while (true)
		{
			string l;
			getline(cin, l);
			
			if (l == "")
				break;
				
			istringstream iss(l);
			
			vector<string> s{ istream_iterator<string>{iss}, istream_iterator<string>{} };
			
			for (int i = 0; i < s.size(); ++i)
			{
				if (m.find(s[i]) == m.end())
				{
					m[s[i]] = loc;
					cout << s[i] << ' ';
					loc++;
				}
				else
					cout << m[s[i]] << ' ';
			}
			cout << '\n';
		}
		cout << '\n';
	}
}