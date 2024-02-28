#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int res = 0;

	if (n < 10)
	{
		cout << n << "\n";
		return 0;
	}

	for (int i = 1; i <= n; i *= 10)
		res += n - i + 1;

	cout << res << '\n';


	return 0;
}