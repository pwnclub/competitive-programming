// Infinity
// dmoj.ca/problem/infinity
// 2017-07-03
// AC in 0.01s
#include <iostream>
using namespace std;

int main()
{
	long long a, b;
    
	cin >> hex >> a >> b;
    
	if (a + b > 1061109567)
		cout << "Yes\n";
	else
		cout << "No\n";
}