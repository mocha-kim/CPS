#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string num;
	int sum = 0, tmp, max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		tmp = 0;
		for (auto c : num)
			tmp += c - 48;
		if (tmp >= sum)
		{
			if (!(tmp == sum && stoi(num) < max))
				max = stoi(num);
			sum = tmp;
		}
	}
	cout << max;
}