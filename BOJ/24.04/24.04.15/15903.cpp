#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	priority_queue<long long, vector<long long>, greater<long long>> pq;

	for (int i = 0; i < n; i++)
	{
		long long card;
		cin >> card;
		pq.push(card);
	}

	for (int i = 0; i < m; i++)
	{
		long long x = pq.top();	pq.pop();
		long long  y = pq.top();	pq.pop();

		pq.push(x + y);
		pq.push(x + y);
	}

	long long sum = 0;

	while (!pq.empty())
	{
		sum += pq.top();
		pq.pop();
	}

	cout << sum << '\n';

	return 0;
}