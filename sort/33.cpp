#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> nums;
	nums.resize(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];

	int tmp, count = 0;
	priority_queue<int, vector<int>, less<int> > pq(nums.begin(), nums.end());
	while (count < 2)
	{
		tmp = pq.top();
		while (pq.top() == tmp)
		{
			pq.pop();
		}
		count++;
	}
	cout << pq.top();
}