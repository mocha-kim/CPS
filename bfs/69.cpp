#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	vector<vector<bool> > info(7, vector<bool>(7));
	for (int i = 0; i < 6; i++)
	{
		int a, b;
		cin >> a >> b;
		info[a - 1][b - 1] = true;
		info[b - 1][a - 1] = true;
	}

	vector<bool> is_visited(7);
	is_visited[0] = true;
	queue<int> q;
	q.push(0);
	cout << "1";
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		for (int i = 0; i < 7; i++)
		{
			if (info[cur][i] && !is_visited[i])
			{
				q.push(i);
				cout << " " << i + 1;
				is_visited[i] = true;
			}
		}
	}
	
}