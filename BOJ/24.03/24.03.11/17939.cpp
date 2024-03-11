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

	int tot = 0;

	int tmp = v[n - 1];
	for (int i = v.size() - 2; i >= 0; i--)
	{
		if (tmp > v[i])
			tot += tmp - v[i];
		else
			tmp = v[i];
	}

	cout << tot << '\n';

	return 0;
}