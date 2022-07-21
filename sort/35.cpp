#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string positive;
	string negative;
	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num > 0)
			positive.append(to_string(num) + " ");
		else
			negative.append(to_string(num) + " ");
	}

	string answer = negative + positive;
	answer.pop_back();
	cout << answer;
}