#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;


	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);

	vector<int> res;
	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();
		if (q.empty())
		{
			res.push_back(cur);
			break;
		}
		res.push_back(cur);
		q.push(q.front());
		q.pop();
	}

	for (auto& e : res)
		cout << e << ' ';
	cout << '\n';

	return 0;
}