#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	vector<vector<int> > board(9, vector<int>(9));
	vector<int> ave(9, 0);
	int min, min_idx;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> board[i][j];
			ave[i] += board[i][j];
		}
		ave[i] = round(ave[i] / 9.0f);
		min = numeric_limits<int>::max();
		for (int j = 0; j < 9; j++)
		{
			int tmp = abs(board[i][j] - ave[i]);
			if (tmp < min)
			{
				min = tmp;
				min_idx = j;
			}
		}
		cout << ave[i] << " " << board[i][min_idx] << "\n";
	}
}