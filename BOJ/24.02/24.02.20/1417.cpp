#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int dasom;
	cin >> dasom;
	n--;

	priority_queue<int> pq;

	while (n--)
	{
		int x;
		cin >> x;
		pq.push(x);
	}

	int res = 0;
	while (pq.size() && pq.top() >= dasom)
	{
		int x = pq.top();
		pq.pop();
		res++;
		dasom++;
		pq.push(x - 1);
	}

	cout << res << "\n";
	


	return 0;
}