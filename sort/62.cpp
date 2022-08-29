#include <iostream>
#include <vector>

using namespace std;

vector<int> divide(int left, int right, vector<int> &nums)
{
	if (right - left == 0)
		return vector<int>(1, nums[left]);
	if (right - left == 1)
	{
		vector<int> ret(2);
		ret[0] = min(nums[left], nums[right]);
		ret[1] = max(nums[left], nums[right]);
		return ret;
	}

	int mid = (left + right) / 2;
	vector<int> left_vector = divide(left, mid, nums);
	vector<int> right_vector = divide(mid + 1, right, nums);

	int left_size = left_vector.size(), right_size = right_vector.size();
	vector<int> ret;
	ret.reserve(left_size + right_size);
	int left_idx = 0, right_idx = 0;
	while (left_idx < left_size && right_idx < right_size)
	{
		if (left_vector[left_idx] < right_vector[right_idx])
			ret.push_back(left_vector[left_idx++]);
		else
			ret.push_back(right_vector[right_idx++]);
	}
	while (left_idx < left_size)
		ret.push_back(left_vector[left_idx++]);
	while (right_idx < right_size)
		ret.push_back(right_vector[right_idx++]);

	return ret;
}

int main()
{
	int n;
	cin >> n;

	vector<int> nums(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	
	vector<int> answer = divide(0, n - 1, nums);
	for (int i = 0; i < n - 1; i ++)
		cout << answer[i] << " ";
	cout << answer[n - 1];
}