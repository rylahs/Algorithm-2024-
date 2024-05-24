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

	int res = 1;

	while (res <= n && v[res - 1] + 1 > res)
		res = v[res - 1] + 1;


	cout << res << '\n';


	return 0;
}