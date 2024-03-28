#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int h, m;
	cin >> h >> m;
	int res = h * 60 + m;
	cout << res << '\n';

	return 0;
}