#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n, m;
		cin >> n >> m;

		deque<pair<int, int>> dq;

		for (int i = 0; i < n; i++)
		{
			int pr;
			cin >> pr;
			dq.push_back({ pr, i });
		}

		int cnt = 0;
		while (!dq.empty())
		{
			auto cur = dq.front();
			
			int maxPr = -1;
			for (auto& e : dq)
			{
				if (e.first > maxPr)
					maxPr = e.first;
			}

			if (maxPr == cur.first)
			{
				cnt++;
				dq.pop_front();
				if (cur.second == m)
					break;

				continue;
			}

			else
			{
				dq.pop_front();
				dq.push_back(cur);
				continue;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}