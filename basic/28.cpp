#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int cur_num, count = 0;
	for (int i = 5; i <= n; i++)
	{
		cur_num = i;
		while (cur_num > 1)
		{
			if (cur_num % 5 == 0)
			{
				count++;
				cur_num /= 5;
			}
			else
				break ;
		}
	}
	cout << count;
}