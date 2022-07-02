#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> temperatures(n);
	int count = 0;
	for (int i = 0; i < n; i++)
		cin >> temperatures[i];

	int max = 0;
	for (int i = 0; i < k; i++)
		max += temperatures[i];

	int tmp = max;
	for (int i = k; i < n; i++)
	{
		tmp = tmp + temperatures[i] - temperatures[i - k];
		if (tmp >= max)
			max = tmp;
	}
	cout << max;
}