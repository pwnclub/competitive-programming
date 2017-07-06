// Mocking SpongeBob
// dmoj.ca/problem/mockingspongebob
// 2017-06-10
// AC in 0.07s
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    
	string s;
	int counter = 0, n;
	
	cin >> n;
	cin.ignore();
	
	for (int i = 0; i < n; ++i)
	{
		getline(cin, s);
		
		for (int i = 0; i < s.size(); ++i)
			if (isalpha(s[i]))
			{
				if (counter == 0)
					s[i] = tolower(s[i]);
				else
				{
					counter = -1; 
					s[i] = toupper(s[i]);
				}
				++counter;
			}
			
		cout << s << '\n';
		counter = 0;
	}
}