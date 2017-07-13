// TLE '16 Contest 1 P2 - Heavy-Light Decomposition
// dmoj.ca/problem/tle16c1p2
// 2017-07-13
// AC in 0.31s
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int boxes[1000];
vector<int> modes;

int main()
{
    int n, row = 1, max_row = 0, sum = 0, num_median = 0, num_mode = 0, num_mean = 0;
    double mean, median, mode = 0;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> boxes[i];
        sum += boxes[i];
    }

    mean = sum * 1.0 / n;

    sort(boxes, boxes + n);

    if (n % 2 == 1)
        median = boxes[n / 2];
    else
        median = (boxes[n / 2] + boxes[n / 2 - 1]) / 2;

    for (int i = 1; i < n; ++i)
    {
        if (boxes[i] == boxes[i - 1])
            ++row; 
        if (boxes[i] != boxes[i-1])
        {
            if (row == max_row)
                modes.push_back(boxes[i - 1]);
            else if (row > max_row)
            {
                modes.clear();
                modes.push_back(boxes[i - 1]);
                max_row = row;
            }
            row = 1;
        }
    }

    if (row == max_row)
        modes.push_back(boxes[n - 1]);
    else if (row > max_row)
    {
        modes.clear();
        modes.push_back(boxes[n - 1]);
    }

    for (auto it : modes)
        mode += it;

    mode /= modes.size();

    for (int i = 0; i < n; ++i)
    {
        if (boxes[i] <= median)
            ++num_median;
        if (boxes[i] <= mode)
            ++num_mode;
        if (boxes[i] <= mean)
            ++num_mean;
    }
    
    cout << min(min(num_median, num_mode), num_mean) << '\n';
}