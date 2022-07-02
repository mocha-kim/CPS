#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<bool> check(n - 1);
	int gap, pre, num;
	cin >> pre;
	for (int i = 1; i < n; i++)
	{
		cin >> num;
		gap = abs(num - pre);
		if (0 < gap && gap < n)
			check[gap - 1] = true;
		pre = num;
	}
	for (bool b : check)
	{
		if (!b)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}