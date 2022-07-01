#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int nums[100];
	fill_n(nums, n, 0);
	for (int i = 0; i < n; i++)
		cin >> nums[i];

	int count = 0;
	for (int i = 0; i < n - 1; i++)
	{
		bool is_tallest = true;
		for (int j = i + 1; j < n; j++)
		{
			if (nums[i] <= nums[j])
			{
				is_tallest = false;
				break;
			}
		}
		if (is_tallest)
			count++;
	}
	cout << count;
}