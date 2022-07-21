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
	for(i = 1; i < n; i++)
	{
		tmp = nums[i];
		for(j = i - 1; j >= 0; j--)
		{
			if(nums[j] > tmp)
				nums[j + 1] = nums[j];
			else
				break;
		}
		nums[j + 1] = tmp;
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