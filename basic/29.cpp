#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int count = 0;
	string num_str = to_string(n);
	int cur, left, right;
	int k = 1;
	for (int i = num_str.size() - 1; i >= 0; i--)
	{
		cur = num_str[i] - 48;
		left = n / (k * 10);
		right = n % k;
		if (cur > 3)
			count += (left + 1) * k;
		else if (cur == 3)
			count += left * k + right + 1;
		else
			count += left * k;
		k *= 10;
	}
	cout << count;
}