#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int num, max = -1, count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num > m)
		{
			count++;
			if (max <= count)
				max = count;
		}
		else
			count = 0;
	}
	cout << max;
}