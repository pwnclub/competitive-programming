// CCC '13 J2 - Rotating letters
// dmoj.ca/problem/ccc13j2
// 2017-02-23
// AC in 0.03s
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sign;
	bool f = true;
	
	cin >> sign;
	
	for (int i = 0; i < sign.size(); ++i)
		if (sign[i] != 'I' && sign[i] != 'O' && sign[i] != 'S' && sign[i] != 'H' && sign[i] != 'Z' && sign[i] != 'X' && sign[i] != 'N')
			f = false;

	if (f == true)
		cout << "YES\n";
	else
		cout << "NO\n";
}