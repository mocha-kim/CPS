#include <iostream>
#include <vector>

using namespace std;

#define ROW 0
#define COL 1

int main()
{
	int h, w;
	cin >> h >> w;

	vector<vector<int> > territory(h, vector<int>(w));
	vector<vector<int> > accum(h + 1, vector<int>(w + 1, 0));
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> territory[i][j];
			accum[i + 1][j + 1] = accum[i][j + 1] + accum[i + 1][j]
									- accum[i][j] + territory[i][j];
		}
	}

	int t_h, t_w, tmp, max = -1;
	cin >> t_h >> t_w;
	for (int i = t_h; i <= h; i++)
	{
		for (int j = t_w; j <= w; j++)
		{
			tmp = accum[i][j] - accum[i - t_h][j]
					- accum[i][j - t_w] + accum[i - t_h][j - t_w];
			if (max < tmp)
				max = tmp;
		}
	}
	cout << max;
}