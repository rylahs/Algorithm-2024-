#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	priority_queue<int, vector<int>, greater<int>> pq;
	int n;
	cin >> n;

	while (n--)
	{
		int x;
		cin >> x;
		if (x == 0)
		{
			if (pq.empty())
			{
				cout << 0 << '\n';
				continue;
			}
			cout << pq.top() << '\n';
			pq.pop();
			continue;
		}

		pq.push(x);
	}

	return 0;
}