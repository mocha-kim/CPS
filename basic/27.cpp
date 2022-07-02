#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int cur_num, j;
	vector<int> prime_count(n + 1);
	for (int i = 2; i <= n; i++)
	{
		cur_num = i;
		j = 2;
		while (cur_num > 1)
		{
			if (cur_num % j == 0)
			{
				prime_count[j]++;
				cur_num /= j;
			}
			else
				j++;
		}
	}
	string answer = to_string(n) + "! = ";
	for (int i : prime_count)
	{
		if (i != 0)
			answer.append(to_string(i) + " ");
	}
	answer.pop_back();
	cout << answer;
}