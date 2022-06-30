#include <iostream>
#include <string>

using namespace std;

int main()
{
	string number;
	cin >> number;

	int digit[10];
	fill_n(digit, 10, 0);
	for (char c : number)
	{
		int n = c - 48;
		digit[n]++;
	}

	int answer, max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (max <= digit[i])
		{
			max = digit[i];
			answer = i;
		}
	}
	cout << answer;
}