#include <iostream>

using namespace std;

int get_position(int n, int *help)
{
	int tmp_help = 1, position = 0;
	while (n > 0)
	{
		n /= 10;
		if (n > 0)
			tmp_help *= 10;
		position++;
	}
	(*help) = tmp_help;
	return position;
}

int count_under_position(int position)
{
	int count = 0, help = 1;
	for (int i = 1; i < position; i++)
	{
		count += 9 * help * i;
		help *= 10;
	}
	return count;
}

int main()
{
	int n;
	cin >> n;

	int help, position, count;
	position = get_position(n, &help);
	count = count_under_position(position);
	count += (n - help + 1) * position;
	cout << count;
}