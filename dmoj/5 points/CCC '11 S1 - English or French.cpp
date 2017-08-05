// CCC '11 S1 - English or French?
// dmoj.ca/problem/ccc11s1
// 2017-02-24
// AC in 0.03s
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int e = 0, f = 0, n;
	string word;
	
	cin >> n;
	
	while (cin >> word)
		for (auto it : word)
		{
			if (it == 'S' || it == 's')
				++f;
			if (it == 'T' || it == 't')
				++e;
		}
		
	if (e > f)
		cout << "English\n";
	else
		cout << "French\n";
}