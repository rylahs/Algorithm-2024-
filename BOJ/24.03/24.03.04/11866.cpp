#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	int cnt = 0;
	deque<int> dq;
	for (int i = 1; i <= n; i++)
		dq.push_back(i);

	vector<int> res;

	while (!dq.empty())
	{
		cnt++;
		auto cur = dq.front();
		if (cnt % k == 0)
		{
			res.push_back(cur);
			dq.pop_front();
			continue;
		}

		
		dq.pop_front();
		dq.push_back(cur);
	}

	
	for (int i = 0; i < res.size(); i++)
	{
		if (i == 0)
			cout << '<';
		cout << res[i];
		if (i != res.size() - 1)
			cout << ", ";
	}
	cout << '>';
	

	return 0;
}