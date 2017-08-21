// CCC '17 S2 - High Tide, Low Tide
// dmoj.ca/problem/ccc17s2
// 2017-06-25
// AC in 0.06s
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int meas[101], orde[101];

int main()
{
	int n, pos;
	bool high = true;
	
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	    cin >> meas[i];

	sort(meas, meas + n);

	if (n % 2 == 0 || n == 1)
		pos = n - 1;
	else
		pos = n - 2;

	for (int i = n - 1; i >= 0; i--)
	{
		orde[pos] = meas[i];

		if (high == true)
			pos -= 2;
		else
			pos += 2;

		if (pos < 0)
		{
			high = false;
			if (pos == -1)
				pos = 0;
			if (pos == -2)
				pos = 1;
		}
	}

	for (int i = 0; i < n; ++i)
		cout << orde[i] << ' ';
	cout << '\n';
}