#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count_dvd(int n, int m, vector<int> &songs, int min)
{
	int i, sum = 0, count = 1;
	for (i = 0; i < n; i++)
	{
		sum += songs[i];
		if (sum > min)
		{
			sum = songs[i];
			count++;
		}
		if (count > m)
			break;
	}
	return count;
}

int main()
{
	int n, m;
	cin >> n >> m;

	int longest = -1, total = 0;
	vector<int> songs(n);
	for (int i = 0; i < n; i++)
	{
		cin >> songs[i];
		total += songs[i];
		if (longest < songs[i])
			longest = songs[i];
	}

	int count, min, cur;
	int left = 1, right = total;
	while (left <= right)
	{
		cur = (right + left) / 2;
		count = count_dvd(n, m, songs, cur);
		if (longest <= cur && count <= m)
		{
			min = cur;
			right = cur - 1;
		}
		else
			left = cur + 1;
	}
	cout << min;
}