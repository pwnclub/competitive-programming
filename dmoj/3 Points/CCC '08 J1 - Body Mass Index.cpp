// CCC '08 J1 - Body Mass Index
// dmoj.ca/problem/ccc08j1
// 2017-02-22
// AC in 0.01s
#include <iostream>
using namespace std;

int main()
{
    double w, h, bmi;
    
    cin >> w >> h;
    
    bmi = w / (h * h);
    
    if(bmi > 25)
        cout << "Overweight\n";
    else if(bmi < 18)
        cout << "Underweight\n";
    else
        cout << "Normal weight\n";
}