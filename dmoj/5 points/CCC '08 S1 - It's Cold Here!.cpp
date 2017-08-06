// CCC '08 S1 - It's Cold Here!
// dmoj.ca/problem/ccc08s1
// 2017-02-25
// AC in 0.02s
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	string city, min_city = "";
	int temp, min_temp = 201;
	
	while (true)
	{
		cin >> city >> temp;

		if (temp < min_temp)
		{
			min_temp = temp;
			min_city = city;
		}

		if (city == "Waterloo")
			break;
	}
	
	cout << min_city << '\n';
}