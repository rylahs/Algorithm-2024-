#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long mi = LLONG_MAX;
	long long mx = LLONG_MIN;

	for (int i = 0; i < n; i++)
	{
		long long num;
		cin >> num;
		mi = min(num, mi);
		mx = max(num, mx);
	}

	long long res = mi * mx;
	cout << res << "\n";
	return 0;
}