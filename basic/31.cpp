#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int c, h;
	size_t begin, end;
	begin = str.find('C');
	end = str.find('H');
	if (begin == string::npos || end == string::npos || begin >= end)
		return 1;
	if (str.find_first_not_of("1234567890CH") != string::npos)
		return 1;

	try
	{
		if (end - begin == 1)
			c = 1;
		else
			c = stoi(str.substr(begin + 1, end - begin - 1));
		if (str.size() == end + 1)
			h = 1;
		else
			h = stoi(str.substr(end + 1));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	cout << c * 12 + h;
}