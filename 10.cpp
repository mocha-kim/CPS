#include <iostream>

using namespace std;

int digit_sum(int x)
{
	int sum = 0;
	while (x > 0)
	{
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main()
{
	int n;
	cin >> n;

	int num, sum = 0, tmp, max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		tmp = digit_sum(num);
		if (tmp >= sum)
		{
			if (!(tmp == sum && num < max))
				max = num;
			sum = tmp;
		}
	}
	cout << max;
}