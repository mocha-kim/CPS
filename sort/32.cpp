#include <iostream>
#include <queue>
#include <string>

using namespace std;

/*
#include<iostream>
int main()
{
	int n;
	cin >> n;

	vector<int> nums;
	nums.resize(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];

	int tmp;
	for (i = 0; i < n - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < n; j++)
			if (nums[j] < nums[idx])
				idx=j;
		tmp = nums[i];
		nums[i] = nums[idx];
		nums[idx] = tmp;
	}
	string answer;
	for (int i : nums)
		answer.append(to_string(i) + " ");
	answer.pop_back();
	cout << answer;
}
*/

int main()
{
	int n;
	cin >> n;

	vector<int> nums;
	nums.resize(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];

	priority_queue<int, vector<int>, greater<int> > pq(nums.begin(), nums.end());
	string answer;
	while (pq.size())
	{
		answer.append(to_string(pq.top()) + " ");
		pq.pop();
	}
	answer.pop_back();
	cout << answer;
}