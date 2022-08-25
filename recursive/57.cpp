#include <iostream>

using namespace std;

void convert_binary(int n)
{
	int div = n / 2;
	int rem = n % 2;
	if (div < 2)
	{
		cout << div << rem;
		return;
	}
	convert_binary(div);
	cout << rem;
}

int main()
{
	int n;
	cin >> n;

	convert_binary(n);
}