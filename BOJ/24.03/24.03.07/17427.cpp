#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long ans = 0;

	for (int i = 1; i <= n; i++)
		ans += (n / i) * i;

	cout << ans << '\n';

	return 0;
}