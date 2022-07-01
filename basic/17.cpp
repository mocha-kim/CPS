#include <iostream>
#include <string>

using namespace std;

int calc_sum(int n)
{
	return n * (n + 1) / 2;
}

int main()
{
	int n;
	cin >> n;

	int num, sum;
	string answer;
	for (int i = 0; i < n; i++)
	{
		cin >> num >> sum;
		int tmp = calc_sum(num);
		if (tmp == sum)
			answer.append("YES\n");
		else
			answer.append("NO\n");
	}
	answer.pop_back();
	cout << answer;
}