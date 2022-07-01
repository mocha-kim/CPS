#include <iostream>
#include <string>

using namespace std;

int main()
{
	string id;
	cin >> id;
	if (id.find('-') == string::npos)
		return 1;

	int age = 119 - stoi(id.substr(0, 2)) + 1;
	char gender = id[id.find('-') + 1];
	switch (gender)
	{
	case '3':
		age -= 100;
	case '1':
		gender = 'M';
		break;
	case '4':
		age -= 100;
	case '2':
		gender = 'W';
		break;
	}
	cout << age << " " << gender;
	return 0;
}