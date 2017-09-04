// VM7WC '16 #3 Silver - Can Shahir even get there?!
// dmoj.ca/problem/vmss7wc16c3p2
// 2017-06-30
// AC in 0.03s
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[2001];
bool visited[2001];

bool bfs(int n, int e)
{
	queue<int> q;

	q.push(n);

	while (!q.empty())
	{

		int v = q.front();

		if (v == e)
			return true;

		q.pop();

		if (!visited[v])
			visited[v] = true;

		for (auto it : graph[v])
			if (!visited[it])
				q.push(it);
	}
	return false;
}

int main()
{
    cin.tie(0);
	ios::sync_with_stdio(0);

	int n, m, a, b, x, y;

	cin >> n >> m >> a >> b;

	for (int i = 0; i < m; ++i)
	{
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	if (bfs(a, b))
		cout << "GO SHAHIR!\n";
	else
		cout << "NO SHAHIR!\n";
}