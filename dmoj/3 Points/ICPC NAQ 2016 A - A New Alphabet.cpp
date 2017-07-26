// ICPC NAQ 2016 A - A New Alphabet
// dmoj.ca/problem/naq16a
// 2017-07-08
// AC in 0.01s
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char c;
    string new_alphabet[26] = { "@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2" };
    
    cin >> noskipws;
    
    while (cin >> c)
    {
        if (int(c) > 64 && int(c) < 91)
            cout << new_alphabet[int(c) - 65];
        else if (int(c) > 96 && int(c) < 123)
            cout << new_alphabet[int(c) - 97];
        else
            cout << c;
    }
}