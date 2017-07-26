// VM7WC '15 #6 Bronze - Alex's Bae
// dmoj.ca/problem/vmss7wc15c6p1
// 2017-06-25
// AC in 0.02s
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> a, b;
	string sa, sb;
	
	getline(cin, sa);
	getline(cin, sb);
	
	for (auto it : sa)
		if (isalpha(it))
			a.push_back(tolower(it));
			
	for (auto it : sb)
		if (isalpha(it))
			b.push_back(tolower(it));
			
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	if (a == b)
		cout << "yes\n";
	else
		cout << "no\n";
}