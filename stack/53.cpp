#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	stack<int> s;
	while (true)
	{
		int div = n / k;
		int rem = n % k;
		s.push(rem);
		if (div < k)
		{
			s.push(div);
			break;
		}
		n /= k;
	}

	string answer = "";
	while (!s.empty())
	{
		int num = s.top();
		s.pop();
		if (num > 9)
			answer.push_back(num - 10 + 'A');
		else
			answer.push_back(num + '0');
	}
	cout << answer;
}