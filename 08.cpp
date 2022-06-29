#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int lb = 0;
	bool is_vaild = true;
	for (auto c : str)
	{
		if (c == '(')
			lb++;
		else if (c == ')')
			lb--;
		if (lb < 0)
			is_vaild = false;
	}
	if (lb != 0)
		is_vaild = false;
	cout << (is_vaild ? "YES" : "NO");
}