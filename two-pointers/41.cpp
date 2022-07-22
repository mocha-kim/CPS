#include <iostream>
#include <string>

using namespace std;

void print_line(int begin, int end)
{
	int sum = 0;
	string answer;
	for (int i = begin; i <= end; i++)
	{
		if (i == end)
			answer.append(to_string(i) + " = ");
		else
			answer.append(to_string(i) + " + ");
		sum += i;
	}
	answer.append(to_string(sum));
	cout << answer << "\n";
}

int main()
{
	int n;
	cin >> n;

	int sum, count = 0;
	for (int i = n / 2 + 1; i > 0; i--)
	{
		sum = 0;
		for (int j = i; j > 0; j--)
		{
			sum += j;
			if (sum == n)
			{
				count++;
				print_line(j, i);
				break;
			}
		}
	}
	cout << count << "\n";
}