#include <iostream>
#include <vector>

using namespace std;

int g_count = 0;
int g_n;

void dfs(int cur, vector<bool> &is_visited, vector<vector<bool> > &graph)
{
	if (cur == g_n - 1)
	{
		g_count++;
		return;
	}

	is_visited[cur] = true;
	for (int i = 0; i < g_n; i++)
		if (!is_visited[i] && graph[cur][i])
			dfs(i, is_visited, graph);
	is_visited[cur] = false;
}

int main()
{
	int m;
	cin >> g_n >> m;

	vector<vector<bool> > graph(g_n, vector<bool>(g_n, false));
	for (int i = 0; i < m; i++)
	{
		int v1, v2;
		cin >> v1 >> v2;
		graph[v1 - 1][v2 - 1] = true;
	}
	vector<bool> is_visited(g_n, false);
	dfs(0, is_visited, graph);
	cout << g_count;
}