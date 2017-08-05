// CCC '05 J3 - Returning Home
// dmoj.ca/problem/ccc05j3/resubmit/531220
// 2017-06-25
// AC in 0.01s
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string s = " ";
	stack<string> d;
	
	while (s != "SCHOOL")
	{
		cin >> s;
		
		if(s != "SCHOOL")
			d.push(s);
	}
	
	while (true)
	{
		cout << "Turn ";
		
		if (d.top() == "R")
			cout << "LEFT ";
		else
			cout << "RIGHT ";
			
		d.pop();
		
		if (d.empty())
			break;
			
		cout << "onto " << d.top() << " street.\n";
		
		d.pop();
	}
	
	cout << "into your HOME.\n";
}