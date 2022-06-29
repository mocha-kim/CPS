#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);

	string word;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ')
			word.push_back(str[i]);
	}
	for(auto& c : word)
	{
	   c = tolower(c);
	}
	cout << word;
}