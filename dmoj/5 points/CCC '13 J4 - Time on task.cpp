// CCC '13 J4 - Time on task
// dmoj.ca/problem/ccc13j4
// 2017-06-24
// AC in 0.02s
#include <iostream>
#include <algorithm>
using namespace std;

int v[100001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int t, c, s = 0, ts = 0, i = 0;
	
	cin >> t >> c;
	
	for (int i = 0; i < c; ++i)
		cin >> v[i];
	
	sort(v, v + c);
	
	while (i < c)
	{
		ts += v[i];
		
		if (ts > t)
			break;
			
		i++;
		s++;
	}
	
	cout << s << '\n';
}