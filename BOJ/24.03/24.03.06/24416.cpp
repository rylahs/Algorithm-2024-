#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int fibo[41] = {};
	fibo[0] = 0;	fibo[1] = 1;
	for (int i = 2; i <= n; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];

	cout << fibo[n] << ' ' << n - 2 << '\n';

	return 0;
}