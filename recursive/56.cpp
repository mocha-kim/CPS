#include <iostream>

using namespace std;

void print_until_n(int n, int cur)
{
	cout << cur;
	if (cur == n)
		return;
	cout << " ";
	print_until_n(n, cur + 1);
}

int main()
{
	int n;
	cin >> n;

	print_until_n(n, 1);
}