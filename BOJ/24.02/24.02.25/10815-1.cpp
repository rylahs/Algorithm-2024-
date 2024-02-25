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

	int m;
	cin >> m;
	sort(v.begin(), v.end());

	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;

		if (binary_search(v.begin(), v.end(), num))
		{
			cout << 1 << ' ';
			continue;
		}
		cout << 0 << ' ';
	}
	return 0;
}