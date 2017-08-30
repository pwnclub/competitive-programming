// Christmas Presents
// dmoj.ca/problem/gfssoc3j3
// 2017-06-27
// AC in 0.04s
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int p, t;
	double co, ra;
	string it, te;
	vector<pair<double, string>> pp, tt;

	cin >> p >> t;

	for (int i = 0; i < p; ++i)
	{
		cin.ignore();
		getline(cin, it);
		cin >> co;
		pp.push_back(make_pair(co, it));
	}

	for (int i = 0; i < t; ++i)
	{
		cin.ignore();
		getline(cin, te);
		cin >> ra;
		tt.push_back(make_pair(ra, te));
	}

	sort(pp.begin(), pp.end());
	sort(tt.begin(), tt.end());

	for (int i = 0; i < tt.size(); ++i)
		cout << tt[i].second << " will get a " << pp[i].second << '\n';
}