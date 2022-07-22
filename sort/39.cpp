#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int n, num;
	priority_queue<int, vector<int>, greater<int> > sorted;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		sorted.push(num);
	}

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		sorted.push(num);
	}

	string answer;
	while (sorted.size())
	{
		answer.append(to_string(sorted.top()) + " ");
		sorted.pop();
	}
	answer.pop_back();
	cout << answer;
}