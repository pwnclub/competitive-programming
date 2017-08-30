// Johnny and Garden
// dmoj.ca/problem/tsoc16c1p2
// 2017-06-24
// AC in 0.02s
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string s, f;
	getline(cin, s);
	auto it = s.find('.');

	if (it == string::npos)
	{
		getline(cin, f);
		transform(f.begin(), f.end(), f.begin(), ::tolower);

		cout << '"' << s << "\" - " << f << '\n';
	}
	else
		cout << '"' << s.substr(0, it) << "\" - " << s.substr(it + 1, s.back()) << '\n';
}