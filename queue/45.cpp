// Josephus problem
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	queue<int> princes;
	for (int i = 1; i < n + 1; i++)
		princes.push(i);
	
	int tmp, count = n;
	while (princes.size() > 1)
	{
		for (int i = 1; i < k; i++)
		{
			tmp = princes.front();
			princes.pop();
			princes.push(tmp);
		}
		princes.pop();
	}
	cout << princes.front();
}