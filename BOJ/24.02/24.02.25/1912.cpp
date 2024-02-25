#include <bits/stdc++.h>
using namespace std;

int dp[100002];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	dp[0] = v[0];
	for (int i = 1; i < n; i++)
		dp[i] = max(v[i], dp[i - 1] + v[i]);

	int mxValue = *max_element(dp, dp + n);
	cout << mxValue << "\n";
	

	return 0;
}