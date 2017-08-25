// OR-deal 
// dmoj.ca/problem/gfssoc3s1
// 2017-07-03
// AC in 0.04s
#include <iostream>
using namespace std;

int main()
{
	long long n;
	
	cin >> n;
	
	for (long long i = 1; i <=n ; i <<= 1)
		cout << '1';
}