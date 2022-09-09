#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct compare
{
	bool operator()(pair<int, int> p1, pair<int, int> p2)
	{ return p1.second > p2.second; }
};

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int> > graph(n, vector<int>(n, -1));
	for (int i = 0; i < m; i++)
	{
		int node1, node2, weight;
		cin >> node1 >> node2 >> weight;
		graph[node1 - 1][node2 - 1] = weight;
	}
	
	vector<int> min_dist(n, 2147483647);
	min_dist[0] = 0;
	vector<bool> is_visited(n, false);
	is_visited[0] = true;
	priority_queue<pair<int, int>, vector<pair<int, int> >, compare> q;
	q.push(make_pair(0, 0));
	
	while (!q.empty())
	{
		int cur = q.top().first;
		int dist = q.top().second;
		q.pop();

		if (min_dist[cur] < dist)
			continue;

		for (int i = 0; i < n; i++)
		{
			if (graph[cur][i] == -1)
				continue;
			int cost = dist + graph[cur][i];
			if (cost < min_dist[i])
			{
				min_dist[i] = cost;
				q.push(make_pair(i, cost));
			}
		}
	}
	
	cout << min_dist[n - 1];
}