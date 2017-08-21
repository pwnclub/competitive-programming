// CCC '01 S2 - Spirals
// dmoj.ca/problem/ccc01s2
// 2017-06-25
// AC in 0.02s
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int vv[10][10];
vector<int> v;
int main()
{
	int x = 4, y = 4, a, b;
	
	cin >> a >> b;
	
	for (int i = a; i <= b; ++i)
	{
		vv[y][x] = i;
		int d = i - a;
		
		if (d == 0 || (d >= 6 && d <= 8) || (d >= 20 && d <= 24) || (d >= 42 && d <= 48) || (d >= 72 && d <= 80))
			y++;
		else if (d == 1 || (d >= 9 && d <= 11) || (d >= 25 && d <= 29) || (d >= 49 && d <= 55) || (d >= 81 && d <= 89))
			x++;
		else if (d == 2 || d == 3 || (d >= 12 && d <= 15) || (d >= 30 && d <= 35) || (d >= 56 && d <= 63) || (d >= 90 && d <= 99))
			y--;
		else
			x--;
	}
	for (int i = 0; i < 10; ++i)
	{
		int sizey = 0;

		for (int j = 0; j < 10; ++j)
			sizey += vv[j][i];

		if (sizey != 0)
			v.push_back(i);
	}
	for (int i = 0; i < 10; ++i)
	{
		int sizex = 0, sizey = 0;
		
		for (auto it : vv[i])
			sizex += it;
			
		if (sizex > 0)
		{
			for (int j = 0; j < 10; ++j)
			{
				auto it = find(v.begin(), v.end(), j);
				if (it != v.end())
				{
					if (vv[i][j] == 0)
						cout << "   ";
					else if (vv[i][j] < 10)
						cout << ' ' << vv[i][j] << ' ';
					else
						cout << vv[i][j] << ' ';
				}
			}
			cout << '\n';
		}
	}
}