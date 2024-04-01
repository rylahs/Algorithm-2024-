#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long a, b;
	cin >> a >> b;

	long long diff = abs(b - a);

	if (diff == 0)
		cout << a + b << '\n';
	else
	{
		long long mx = 2 * min(a, b) + 1;
		cout << mx << '\n';
	}


	return 0;
}