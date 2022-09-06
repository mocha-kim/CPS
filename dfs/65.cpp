#include <iostream>
#include <vector>

using namespace std;

int g_count = 0;
int g_dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

void dfs(int x, int y, vector<vector<int> > &map)
{
	if (x == 6 && y == 6)
	{
		g_count++;
		return;
	}

	map[y][x] = 2;
	for (int i = 0; i < 4; i++)
	{
		int next_x = x + g_dir[i][0];
		int next_y = y + g_dir[i][1];
		if (next_x >= 0 && next_x < 7
		&& next_y >= 0 && next_y < 7
		&& map[next_y][next_x] == 0)
			dfs(next_x, next_y, map);
	}
	map[y][x] = 0;
}

int main()
{
	vector<vector<int> > map(7, vector<int>(7));
	for (int i = 0; i < 7; i++)
		for (int j = 0; j < 7; j++)
			cin >> map[i][j];

	dfs(0, 0, map);
	cout << g_count;
}