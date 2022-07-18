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
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - i -1; j++)
		{
			if(a[j] > a[j + 1])
			{
				tmp=nums[j];
				nums[j]=nums[j + 1];
				nums[j + 1]=tmp;
			}
		}
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