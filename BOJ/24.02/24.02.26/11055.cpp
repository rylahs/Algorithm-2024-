#include <bits/stdc++.h>
using namespace std;


int dp[1003];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		dp[i] = v[i];
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (v[j] < v[i])
			{
				dp[i] = max(dp[i], dp[j] + v[i]);
			}
		}
	}
	cout << *max_element(dp, dp + n) << '\n';
	return 0;
}