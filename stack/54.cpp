#include <iostream>
#include <stack>

using namespace std;

int main()
{
	string str;
	cin >> str;

	bool is_vaild = true;
	stack<char> s;
	for (char c : str)
	{
		if (c == '(')
			s.push('(');
		else if (c == ')')
		{
			if (s.empty())
			{
				is_vaild = false;
				break;
			}
			s.pop();
		}
	}
	if (!s.empty())
		is_vaild = false;
	cout << (is_vaild ? "YES" : "NO");
}