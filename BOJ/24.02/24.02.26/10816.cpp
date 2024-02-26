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

	int m;
	cin >> m;

	while (m--)
	{
		int num;
		cin >> num;

		int res = upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num);
		cout << res << ' ';
	}

	return 0;
}