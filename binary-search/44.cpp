#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count_horses(int distance, vector<int> &positions, int n, int c)
{
	int cur, pre = positions[0];
	int count = 1;
	for (int i = 0; i < n; i++)
	{
		cur = positions[i];
		if (cur - pre >= distance)
		{
			count++;
			pre = cur;
		}
		if (count > c)
			break;
	}
	return count;
}

int main()
{
	int n, c;
	cin >> n >> c;

	vector<int> positions(n);
	for (int i = 0; i < n; i++)
		cin >> positions[i];
	sort(positions.begin(), positions.end());

	int cur, left = 1, right = positions[n - 1];
	int max, count;
	while (left <= right)
	{
		cur = (right + left) / 2;
		count = count_horses(cur, positions, n, c);
		if (count >= c)
		{
			max = cur;
			left = cur + 1;
		}
		else
			right = cur - 1;
	}
	cout << max;
}