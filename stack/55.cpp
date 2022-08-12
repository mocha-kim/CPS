#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int n;
	cin >> n;

	queue<int> cars;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		cars.push(num);
	}
	
	int count = 0;
	string answer = "";
	stack<int> buffer;
	while (count < n)
	{
		if (!cars.empty() && cars.front() == count + 1)
		{
			cars.pop();
			answer.append("PO");
			count++;
		}
		else
		{
			if (!buffer.empty() && buffer.top() == count + 1)
			{
				buffer.pop();
				answer.push_back('O');
				count++;
			}
			else
			{
				if (cars.empty())
				{
					cout << "impossible";
					return 0;
				}
				buffer.push(cars.front());
				answer.push_back('P');
				cars.pop();
			}
		}
	}
	cout << answer;
	return 0;
}