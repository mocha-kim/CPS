#include <iostream>

using namespace std;

int main()
{
	int a[10], b[10];
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	for (int i = 0; i < 10; i++)
		cin >> b[i];
	
	int score_a = 0, score_b = 0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > b[i])
			score_a += 3;
		else if (a[i] < b[i])
			score_b += 3;
		else
		{
			score_a++;
			score_b++;
		}
	}
	cout << score_a << " " << score_b << "\n";
	if (score_a == score_b)
		cout << "D";
	else
		cout << (score_a > score_b ? "A" : "B");
}