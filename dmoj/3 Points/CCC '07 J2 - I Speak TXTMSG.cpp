// CCC '07 J2 - I Speak TXTMSG
// dmoj.ca/problem/ccc07j2
// 2017-02-24
// AC in 0.00s
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    string w;
    
    while(true)
    {
        cin >> w;
        
        if(w == "CU") {cout << "see you\n";}
        else if(w == ":-)") {cout << "I'm happy\n";}
        else if(w == ":-(") {cout << "I'm unhappy\n";}
        else if(w == ";-)") {cout << "wink\n";}
        else if(w == ":-P") {cout << "stick out my tongue\n";}
        else if(w == "(~.~)") {cout << "sleepy\n";}
        else if(w == "TA") {cout << "totally awesome\n";}
        else if(w == "CCC") {cout << "Canadian Computing Competition\n";}
        else if(w == "CUZ") {cout << "because\n";}
        else if(w == "TY") {cout << "thank-you\n";}
        else if(w == "YW") {cout << "you're welcome\n";}
        else if(w == "TTYL") {cout << "talk to you later\n"; break;}
        else {cout << w << '\n';}
    }
}
