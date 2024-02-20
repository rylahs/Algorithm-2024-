#include <bits/stdc++.h>
using namespace std;

int dp[14];

void run(int n)
{
	dp[1] = 1;
	dp[2] = 2; // 1 + 1 / 2
	dp[3] = 4; // 1 + 1 + 1 // 2 + 1 , 1 + 2 /  3
	
	for (int i = 4; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	run(12);
	while (testCase--)
	{
		int x;
		cin >> x;
		
		cout << dp[x] << "\n";
	}

	return 0;
}