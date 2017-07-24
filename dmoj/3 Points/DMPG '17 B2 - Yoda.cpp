// DMPG '17 B2 - Yoda
// dmoj.ca/problem/dmpg17b2
// 2017-07-06
// AC in 0.03s
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 0;
	string s;
    
	getline(cin, s);
    
	for (int i = 0; i < s.size(); ++i)
		if (s[i] == ',')
			a = i;
        
	char c = s.back();
    
	if (a == s.size() - 2)
	{
		s.erase(s.begin() + a);
		cout << s << '\n';
	}
	else
	{
		string n = s.substr(a + 2);
		n.pop_back();
		s[0] = tolower(s[0]);
		n[0] = toupper(n[0]);
		cout << n << s.substr(0, a) << c <<'\n';
	}
}