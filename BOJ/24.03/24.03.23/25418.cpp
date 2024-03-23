#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, k;
	cin >> a >> k;

	vector<bool> vis(1000001, false);
	queue<pair<int, int>> q;

	q.push({ a, 0 });
	vis[a] = true;

	while (!q.empty())
	{
		auto cur = q.front().first;
		auto op = q.front().second;
		q.pop();

		if (cur == k)
		{
			cout << op << '\n';
			return 0;
		}

		if (cur * 2 <= 1000000 && !vis[cur * 2])
		{
			q.push({ cur * 2, op + 1 });
			vis[cur * 2] = true;
		}

		if (cur + 1 <= 1000000 && !vis[cur + 1])
		{
			q.push({ cur + 1, op + 1 });
			vis[cur + 1] = true;
		}


	}
	return 0;
}
