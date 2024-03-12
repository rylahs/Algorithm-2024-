#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<long long> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	long long res = 0;
	for (int i = 1; i < n; i++)
	{
		res += (v[i] - v[i - 1]) * i * (n - i);
	}
	res *= 2;

	cout << res << '\n';

	return 0;
}