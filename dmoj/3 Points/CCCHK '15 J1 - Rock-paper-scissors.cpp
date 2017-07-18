// CCCHK '15 J1 - Rock-paper-scissors
// dmoj.ca/problem/hkccc15j1
// 2017-06-24
// AC in 0.04s
#include <iostream>
#include <string>
using namespace std;

string f[100], c;
int a = 0, b = 0, n;

int main()
{
	cin >> n;
	
	for (int i = 0; i < n; ++i)
		cin >> f[i];
		
	for (int i = 0; i < n; ++i)
	{
		cin >> c;
		
		if ((f[i] == "rock" && c == "scissors") || (f[i] == "scissors" && c == "paper") || (f[i] == "paper" && c == "rock"))
			a++;
		else if ((c == "rock" && f[i] == "scissors") || (c == "scissors" && f[i] == "paper") || (c == "paper" && f[i] == "rock"))
			b++;
	}
    
	cout << a << ' ' << b << '\n';
}