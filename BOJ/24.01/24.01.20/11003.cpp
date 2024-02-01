#include <bits/stdc++.h>
using namespace std;

int arr[5000010];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, l;
	cin >> n >> l;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	deque<pair<int, int>> dq;

	for (int i = 1; i <= n; i++)
	{
		if (dq.empty() == false)
		{
			if (dq.front().second < i - l + 1)
				dq.pop_front();
		}

		while (dq.empty() == false && dq.back().first > arr[i])
			dq.pop_back();
		dq.push_back({ arr[i], i });

		cout << dq.front().first << " ";
	}


	return 0;
}