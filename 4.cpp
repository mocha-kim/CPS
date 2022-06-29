#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int min = 2147483647, max = -1, age;
	for (int i = 0; i < n; i++)
	{
		cin >> age;
		if (age < min)
			min = age;
		if (age > max)
			max = age;
	}
	cout << max - min;
}