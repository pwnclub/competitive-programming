// VM7WC '15 #1 Bronze - Goon
// dmoj.ca/problem/vmss7wc15c1p1
// 2017-02-25
// AC in 0.02s
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s;
    int a, b, c;
    
	cin >> s;
    
	a = s[0] - '0' + s[1] - '0' + s[2] - '0';
	b = s[4] - '0' + s[5] - '0' + s[6] - '0';
	c = s[8] - '0' + s[9] - '0' + s[10] - '0' + s[11] - '0';
    
	if (a == b && b == c)
		cout << "Goony!\n";
	else
		cout << "Pick up the phone!\n";
}