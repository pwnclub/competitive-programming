// CCC '11 J3 - Sumac Sequences
// dmoj.ca/problem/ccc11j3
// 2017-06-23
// AC in 0.02s
#include <iostream>
using namespace std;

int main()
{
	int pre, cur, t, s = 2;
	
	cin >> pre >> cur;
	
	while (pre >= cur)
	{
		t = cur;
		cur = pre - cur;
		pre = t;
		++s;
	}
	
	cout << s << '\n';
}