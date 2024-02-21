#include <bits/stdc++.h>
using namespace std;

int dp[1005];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	dp[0] = 1;
	dp[1] = 1;
	
	for (int i = 2; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;

	}

	cout << dp[n] << '\n';


	

	return 0;
}