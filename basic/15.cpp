#include <iostream>

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

	int count = 0;
	for (int i = 2; i <= n; i++)
	{
		if (is_prime(i))
			count++;
	}
	cout << count;
}