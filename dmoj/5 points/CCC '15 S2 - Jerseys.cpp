// CCC '15 S2 - Jerseys
// dmoj.ca/problem/ccc15s2
// 2017-02-25
// AC in 0.32s
#include <iostream>
using namespace std;

char js[1000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int j, a, sum = 0;
	
	cin >> j >> a;

	for (int i = 0; i < j; ++i)
	    cin >> js[i];

	for (int i = 0; i < a; ++i)
	{
		char size;
		int num;
		
		cin >> size >> num;

		if (size == 'S')
		{
			if (js[num - 1] == 'S' || js[num - 1] == 'M' || js[num - 1] == 'L')
			{
				sum++;
				js[num - 1] = 'A';
			}
		}
		else if (size == 'M')
		{
			if (js[num - 1] == 'M' || js[num - 1] == 'L')
			{
				sum++;
				js[num - 1] = 'A';
			}
		}
		else if (size == 'L')
		{
			if (js[num - 1] == 'L')
			{
				sum++;
				js[num - 1] = 'A';
			}
		}
	}

	cout << sum << '\n';
}