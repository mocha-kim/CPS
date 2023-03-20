#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	queue<int> princes;
	for (int i = 1; i <= n; i++)
		princes.push(i);

	int idx = 1;
	while (princes.size() != 1)
	{
		for (int i = 1; i < k; i++)
		{
			princes.push(princes.front());
			princes.pop();
		}
		princes.pop();
	}
	cout << princes.front();
}