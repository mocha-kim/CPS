#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int> > graph(n);
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		graph[a - 1].push_back(b - 1);
	}

	queue<int> q;
	q.push(0);
	vector<bool> is_visited(n);
	is_visited[0] = true;
	vector<int> distance(n);
	while (!q.empty())
	{
		int next, cur = q.front();
		q.pop();
		for (int i = 0; i < graph[cur].size(); i++)
		{
			next = graph[cur][i];
			if (!is_visited[next])
			{
				is_visited[next] = true;
				q.push(next);
				distance[next] = distance[cur] + 1;
			}
		}
	}
	
	for (int i = 1; i < n; i++)
		cout << i + 1 << " : " << distance[i] << "\n";
}