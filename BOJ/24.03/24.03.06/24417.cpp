#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long fibo[3] = {};
	fibo[0] = 1;	fibo[1] = 1;
	for (int i = 1; i <= n; i++)
	{
		fibo[0] = fibo[1];
		fibo[1] = fibo[2];
		fibo[2] = (fibo[1] + fibo[0]) % MOD;
	}

	cout << fibo[2] << ' ' << n - 2 << '\n';

	return 0;
}