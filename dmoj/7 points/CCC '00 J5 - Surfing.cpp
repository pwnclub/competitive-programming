// CCC '00 J5 - Surfing
// dmoj.ca/problem/ccc00j5
// 2017-07-10
// AC in 0.01s
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

vector<unsigned char> visited(100);
vector<vector<string>> links(100);
vector<string> website_list(100);

bool bfs(int n, int e)
{
    for (auto &it : visited) it = false;

    list<int> q;

    visited[n] = true;

    q.push_back(n);

    while (!q.empty())
    {
        n = q.front();

        q.pop_front();

        for (auto it : links[n])
        {
            int index = find(website_list.begin(), website_list.end(), it) - website_list.begin();

            if (index == e)
                return true;

            if (!visited[index])
            {
                visited[index] = true;
                q.push_back(index);
            }
        }
    }
    return false;
}

int main()
{
    int n;
    
    cin >> n;

    string site, line, link = "", from = "", to = "";

    for (int i = 0; i < n; ++i)
    {
        cin >> site;

        line = site;
        website_list[i] = line;

        cin.ignore();

        while (line != "</HTML>")
        {
            getline(cin, line);

            size_t found = line.find("<A HREF=\"", 0), endquote = line.find("\">", found);

            while (found != string::npos)
            {
                link = line.substr(found+9, endquote-found-9);

                links[i].push_back(link);

                found = line.find("<A HREF=\"", found+1);
                endquote = line.find("\">", found+1);

                cout << "Link from " << site << " to " << link << '\n';
            }
        }
    }

    while (true)
    {
        cin >> from;

        if (from == "The")
            break;

        cin >> to;

        int from_index = find(website_list.begin(), website_list.end(), from) - website_list.begin();
        int to_index = find(website_list.begin(), website_list.end(), to) - website_list.begin();

        if (bfs(from_index, to_index))
            cout << "Can ";
        else
            cout << "Can't ";

        cout << "surf from " << from << " to " << to << ".\n";
    }
}