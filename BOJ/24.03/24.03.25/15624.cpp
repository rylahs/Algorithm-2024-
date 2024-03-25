#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long fibo[3] = {};

	fibo[0] = 0; fibo[1] = 1; fibo[2] = 1;

	if (n < 3)
	{
		cout << fibo[n] << '\n';
		return 0;
	}

	for (int i = 3; i <= n; i++)
	{
		fibo[0] = fibo[1]; fibo[1] = fibo[2];
		fibo[2] = (fibo[0] + fibo[1]) % MOD;
	}

	cout << fibo[2] << '\n';


	return 0;
}