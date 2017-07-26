// Back to School '16: Harambe
// dmoj.ca/problem/bts16p1
// 2017-06-23
// AC in 0.03s
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int l = 0, u = 0;
	
	getline(cin, s);
	
	for (auto it : s)
	{
		if (islower(it))
			l++;
		else if (isupper(it))
			u++;
	}
	
	if (l > u)
		for(int i = 0; i < s.size(); ++i)
		    cout << char(tolower(s[i]));
	else if (u > l)
	    for(int i = 0; i < s.size(); ++i)
	        cout << char(toupper(s[i]));
	else
	    cout << s;
}
