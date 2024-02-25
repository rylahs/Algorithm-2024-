#include <bits/stdc++.h>
using namespace std;

int stairs[305];
int dp[305];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int res = 0;

	for (int i = 1; i <= n; i++)
	{
		cin >> stairs[i];
		res += stairs[i];
	}

	if (n <= 2)
	{
		cout << res;
		return 0;
	}

	dp[1] = stairs[1];
	dp[2] = stairs[2];
	dp[3] = stairs[3];

	for (int i = 4; i <= n - 1; i++)
		dp[i] = min(dp[i - 2], dp[i - 3]) + stairs[i];

	cout << res - min(dp[n - 1], dp[n - 2]) << "\n";
	

	return 0;
}