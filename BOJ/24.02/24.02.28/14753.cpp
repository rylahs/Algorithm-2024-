#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	int a = v[0] * v[1];
	int b = v[n - 1] * v[n - 2];

	int c = v[0] * v[1] * v[n - 1];
	int d = v[n - 1] * v[n - 2] * v[n - 3];

	int res = max({ a, b, c, d });
	
	cout << res << '\n';

	return 0;
}