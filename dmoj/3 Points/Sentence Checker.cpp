// Sentence Checker
// dmoj.ca/problem/hci16schecker
// 2017-06-27
// AC in 0.14s
#include <iostream>>
#include <set>
#include <string>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    
	int n;
	set<string> s;
	string w;
	
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> w;
		s.insert(w);
	}
	
	while (cin >> w)
		if (s.find(w) == s.end())
		{
			cout << "Incorrect\n";
			return 0;
		}
		
	cout << "Correct\n";
}
