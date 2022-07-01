#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1;
	string str2;
	cin >> str1 >> str2;

	int alpha[52];
	fill_n(alpha, 52, 0);
	for (char c : str1)
	{
		if (c >= 65 && c <= 90)
			alpha[c - 65]++;
		else if (c >= 97 && c <= 122)
			alpha[c - 97 + 26]++;
	}

	for (char c : str2)
	{
		if (c >= 65 && c <= 90)
			alpha[c - 65]--;
		else if (c >= 97 && c <= 122)
			alpha[c - 97 + 26]--;
	}

	for (int c : alpha)
	{
		if (c != 0)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}