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

	if (next_permutation(v.begin(), v.end()))
	{
		for (auto& e : v)
			cout << e << ' ';
		cout << '\n';
	}
	else
		cout << -1 << '\n';

	return 0;
}