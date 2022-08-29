#include <iostream>
#include <vector>

using namespace std;

int g_n, g_m;
int g_answer = 0;

void dfs(int idx, int sum, vector<int> &nums)
{
	if (idx == g_n)
	{
		if (sum == g_m)
			g_answer++;
		return;
	}

	dfs(idx + 1, sum, nums);
	int cur = nums[idx];
	dfs(idx + 1, sum + cur, nums);
	dfs(idx + 1, sum - cur, nums);
}

int main()
{
	cin >> g_n >> g_m;

	vector<int> nums(g_n);
	for (int i = 0; i < g_n; i++)
		cin >> nums[i];
	dfs(0, 0, nums);
	cout << (g_answer != 0 ? g_answer : -1);
}