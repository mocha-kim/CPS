#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int tmp;
	vector<vector<int> > board(n, vector<int>(n, 0));
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		for (int j = 0; j < n; j++)
			board[j][i] = tmp;
	}
	
	for (int i = n - 1; i >= 0; i--)
	{
		cin >> tmp;
		for (int j = 0; j < n; j++)
		{
			if (board[0][j] >= tmp)
				board[i][j] = tmp;
		}
	}

	int answer = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			answer += board[i][j];
	cout << answer;
}