#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	string num_str;
	size_t find = str.find_first_of("0123456789");
	while (find != string::npos)
	{
		num_str.push_back(str[find]);
		find = str.find_first_of("0123456789", find + 1);
	}
	int num = stoi(num_str);
	cout << num << "\n";

	int count = 0;
	for (int i = 1; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			count++;
			if (i * i != num)
				count++;
		}
	}
	cout << count;
}