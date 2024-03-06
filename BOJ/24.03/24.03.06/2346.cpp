#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int n;
	cin >> n;

	deque<pair<int, int>> dq;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		dq.push_back({ input, i + 1 });
	}

	while (!dq.empty())
	{
		int tmp = dq.front().first;

		cout << dq.front().second << ' ';

		dq.pop_front();
		if (dq.empty())
			break;


		if (tmp > 0)
		{
			for (int i = 0; i < tmp - 1; i++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else
		{
			for (int i = tmp; i < 0; i++)
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}

	}
	return 0;
}