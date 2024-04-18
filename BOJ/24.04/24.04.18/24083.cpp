#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int res = (a + b) % 12;
	if (!res)
		res = 12;

	cout << res << '\n';

	return 0;
}