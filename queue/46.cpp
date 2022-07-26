#include <iostream>
#include <queue>

using namespace std;

typedef struct s_process
{
	int id;
	int remains;
} t_process;

int main()
{
	int n;
	cin >> n;

	t_process tmp;
	queue<t_process> processes;
	for (int i = 0; i < n; i++)
	{
		tmp.id = i + 1;
		cin >> tmp.remains;
		processes.push(tmp);
	}

	int k, count = 0;
	cin >> k;
	while (count < k && processes.size())
	{
		tmp = processes.front();
		processes.pop();
		tmp.remains--;
		if (tmp.remains > 0)
			processes.push(tmp);
		count++;
	}
	if (processes.size())
		cout << processes.front().id;
	else
		cout << "-1";
}