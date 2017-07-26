// Problem-setting Pandemonium (Junior)
// dmoj.ca/problem/mockccc15j3
// 2017-06-23
// AC in 0.02s
#include <iostream>
#include <set>
using namespace std;

set<int> v;
int main()
{
	int n, d;
	
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> d;
		v.insert(d);
	}
	
	cout << v.size() << '\n';
}