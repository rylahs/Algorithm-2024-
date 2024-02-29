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
	for (int i = 1; i < n; i++)
	{
		v[i] = v[i - 1] + v[i];
	}

	cout << accumulate(v.begin(), v.end(), 0) << '\n';

	return 0;
}