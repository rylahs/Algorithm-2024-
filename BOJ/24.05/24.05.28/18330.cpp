#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	int tot = k + 60;

	int cost = 0;

	if (n <= tot)
		cost = n * 1500;
	else
		cost = tot * 1500 + (n - tot) * 3000;

	cout << cost << '\n';

	return 0;
}