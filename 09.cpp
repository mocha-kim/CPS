#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string result = "1 2 2 3 2";
	for (int i = 6; i <= n; i++)
	{
		int count = 0;
		for (int j = 1; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				count++;
				if (j * j != i)
					count++;
			}
		}
		result.append(" " + to_string(count));
	}
	cout << result;
}