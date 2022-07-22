#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> nums(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	sort(nums.begin(), nums.end());

	int cur = nums.size() / 2;
	while (true)
	{
		if (nums[cur] < m)
			cur *= 3 / 2;
		else if (nums[cur] > m)
			cur /= 2;
		else
			break;
	}
	cout << cur + 1;
}