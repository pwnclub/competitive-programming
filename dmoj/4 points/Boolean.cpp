// Boolean
// dmoj.ca/problem/boolean
// 2017-02-22
// AC in 0.01s
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    bool yes;
    string curr;
    
    while(true)
    {
        cin >> curr;
        
        if(curr == "True" || curr == "False")
        {
            if(curr == "True")
                yes = true;
            else
                yes = false;
                
            break;
        }
        else
            ++n;
    }
    
    if((yes == true && n % 2 == 0) || (yes == false && n % 2 != 0))
        cout << "True\n";
    else
        cout << "False\n";
}