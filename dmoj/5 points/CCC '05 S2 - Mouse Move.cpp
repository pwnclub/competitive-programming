// CCC '05 S2 - Mouse Move
// dmoj.ca/problem/ccc05s2
// 2017-03-11
// AC in 0.01s
#include <iostream>
using namespace std;

int main()
{
	int c, r, x, y, px = 0, py = 0;
	
	cin >> c >> r;

	while (true)
	{
		cin >> x >> y;
		
		if (x == 0 && y == 0)
			break;
			
		px += x;
		py += y;
		
		if (px < 0)
			px = 0;
		else if (px > c)
			px = c;
			
		if (py < 0)
			py = 0;
		else if (py > r)
			py = r;

		cout << px << ' ' << py << '\n';
	}
}