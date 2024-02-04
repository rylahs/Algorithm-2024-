#include <bits/stdc++.h>

using namespace std;

int dp[16][16];

void calcDP()
{
	for (int i = 0; i < 15; i++)
		dp[0][i] = i;

	for (int i = 1; i < 15; i++)
	{
		for (int j = 1; j < 15; j++)
		{
			int sum = 0;
			for (int k = 1; k <= j; k++)
			{
				sum += dp[i - 1][k];
			}
			dp[i][j] = sum;
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	calcDP();
	
	int t;
	cin >> t;

	while (t--)
	{
		int k, n;
		cin >> k >> n;

		cout << dp[k][n] << "\n";
	}

	return 0;
}