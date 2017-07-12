// CCC '02 J2- AmeriCanadian
// dmoj.ca/problem/ccc02j2
// 2017-02-23
// AC in 0.00s
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	
	while (true)
	{
		cin >> s;
		
		if (s == "quit!")
			break;
			
		if (s.size() > 4 && s[s.size() - 1] == 'r' && s[s.size() - 2] == 'o' && s[s.size() - 3] != 'a' && s[s.size() - 3] != 'e' && s[s.size() - 3] != 'i' && s[s.size() - 3] != 'o' && s[s.size() - 3] != 'u' && s[s.size() - 3] != 'y')
		{
			for (int i = 0; i < s.size() - 2; ++i)
				cout << s[i];
				
			cout << "our";
		}
		else
			for (auto it : s)
				cout << it;
				
		cout << '\n';
	}
}