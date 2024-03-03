#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, t, p;
	cin >> n >> t >> p;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];


	int rank = 1;

	if (n == p && v[n - 1] >= t)
		rank = -1;

	else
	{
		for (int i = 0; i < n; i++)
			if (v[i] > t)
				rank++;
	}

	cout << rank << '\n';

	return 0;
}