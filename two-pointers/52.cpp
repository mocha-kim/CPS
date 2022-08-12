#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> table(n);
	for (int i = 0; i < 5 && i < n; i++)
		table[i] = i + 1;

	int count = 5;
	int p2 = 2, p3 = 1, p5 = 1;
	while (count <= n)
	{
		int num2 = table[p2] * 2;
		int num3 = table[p3] * 3;
		int num5 = table[p5] * 5; 
		int min = num2 < num3 ? num2 : num3;
		min = min < num5 ? min : num5;
		if (min == num2)
			p2++;
		if (min == num3)
			p3++;
		if (min == num5)
			p5++;
		table[count] = min;
		count++;
	}
	cout << table[n - 1];
}