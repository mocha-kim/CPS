#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int M = 3;
int g_move[M] = {1, 5, -1};

int main()
{
	int s, e;
	cin >> s >> e;

	vector<int> jump_count(max(s, e) + 5);
	queue<int> q;
	q.push(s);
	while (!q.empty())
	{
		int next, cur = q.front();
		q.pop();
		for (int i = 0; i < M; i++)
		{
			next = cur + g_move[i];
			if (jump_count[next] == 0 && next >= 0 && next < e + 5)
			{
				if (next == e)
				{
					cout << jump_count[cur] + 1;
					return 0;
				}
				q.push(next);
				jump_count[next] = jump_count[cur] + 1;
			}
		}
	}
}