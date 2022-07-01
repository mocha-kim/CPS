#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[100], b[100];
	fill_n(a, n, 0);
	fill_n(b, n, 0);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	
	string answer;
	for (int i = 0; i < n; i++)
	{
		int sub = a[i] - b[i];
		if (sub == 0)
			answer.append("D\n");
		else if (sub == -1 || sub == 2)
			answer.append("B\n");
		else
			answer.append("A\n");
	}
	answer.pop_back();
	cout << answer;
}