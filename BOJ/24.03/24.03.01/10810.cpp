#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> v(n + 1);

	while (m--)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (int x = i; x <= j; x++)
			v[x] = k;
	}

	for (int i = 1; i <= n; i++)
		cout << v[i] << ' ';
	cout << '\n';



	return 0;
}