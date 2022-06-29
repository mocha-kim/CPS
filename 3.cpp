#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 1;
	string div;
	cout << "1";
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << " + " << i;
			div.insert(0, " + " + to_string(n / i));
			sum += i + (n / i);
		}
	}
	cout << div << " = " << sum;
}