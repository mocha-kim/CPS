#include <iostream>
#include <vector>

using namespace std;

int g_n = 0;
bool g_answer = false;

void dfs(int index, int sum_a, int sum_b, vector<int> &nums)
{
	if (g_answer)
		return;
	if (index == g_n)
	{
		if (sum_a == sum_b)
			g_answer = true;
		return;
	}

	int cur_num = nums[index];
	dfs(index + 1, sum_a, sum_b, nums);
	dfs(index + 1, sum_a - cur_num, sum_b + cur_num, nums);
}

int main()
{
	cin >> g_n;

	int sum = 0;
	vector<int> nums(g_n);
	for (int i = 0; i < g_n; i++)
	{
		cin >> nums[i];
		sum += nums[i];
	}

	dfs(0, sum, 0, nums);
	cout << (g_answer ? "YES" : "NO");
}