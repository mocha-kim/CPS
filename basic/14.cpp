#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool is_prime(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;

	string num, answer;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		reverse(num.begin(), num.end());
		int num_i = atoi(num.c_str());
		if (is_prime(num_i))
			answer.append(to_string(num_i) + " ");
	}
	answer.pop_back();
	cout << answer;
}