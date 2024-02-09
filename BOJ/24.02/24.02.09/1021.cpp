#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	deque<int> dq;
	for (int i = 1; i <= n; i++)
		dq.push_back(i);

	deque<int> v;
	for (int i = 0; i < m; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}

	int res = 0;
	while (!v.empty())
	{
		if (dq.front() == v.front())
		{
			dq.pop_front();
			v.pop_front();
			continue;
		}

		int findIdx = find(dq.begin(), dq.end(), v.front()) - dq.begin();
		int mid = dq.size() / 2;
		if (findIdx <= mid)
		{
			res++;
			dq.push_back(dq.front());
			dq.pop_front();
			continue;
		}
		else
		{
			res++;
			dq.push_front(dq.back());
			dq.pop_back();
		}

		
	}

	cout << res << "\n";
	
	return 0;
}