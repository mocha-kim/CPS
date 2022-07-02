#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int pre = 0, num, tmp = 0, max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (pre <= num)
			tmp++;
		else
		{	
			if (tmp >= max)
				max = tmp;
			tmp = 1;
		}
		pre = num;
	}
	if (tmp >= max)
		max = tmp;
	cout << max;
}