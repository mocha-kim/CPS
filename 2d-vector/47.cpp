#include <iostream>
#include <vector>

using namespace std;

#define Y 0
#define X 1
enum Dir
{
	UP,
	DOWN,
	RIGHT,
	LEFT
};

int direction[4][2] = { {-1, 0}, {1, 0}, {0, 1}, {0, -1} };

bool is_highest(vector<vector<int> > &board, int x, int y)
{
	int cur = board[y][x];
	if (board[y + direction[Dir::UP][Y]][x + direction[Dir::UP][X]] >= cur)
		return false;
	if (board[y + direction[Dir::DOWN][Y]][x + direction[Dir::DOWN][X]] >= cur)
		return false;
	if (board[y + direction[Dir::RIGHT][Y]][x + direction[Dir::RIGHT][X]] >= cur)
		return false;
	if (board[y + direction[Dir::LEFT][Y]][x + direction[Dir::LEFT][X]] >= cur)
		return false;
	return true;
}

int main()
{
	int n;
	cin >> n;

	vector<vector<int> > board(n + 2, vector<int>(n + 2, 0));
	for (int i = 1; i < n + 1; i++)
		for (int j = 1; j < n + 1; j++)
			cin >> board[i][j];
	
	int count = 0;
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			if (is_highest(board, j, i))
				count++;
		}
	}
	cout << count;
}