#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	// int sum = (b * (b + 1) / 2) - (a * (a + 1) / 2) + a;
	int sum = a;
	cout << a;
	for (int i = a + 1; i <= b; i++)
	{
		sum += i;
		cout << " + " << i;
	}
	cout << " = " << sum;
}