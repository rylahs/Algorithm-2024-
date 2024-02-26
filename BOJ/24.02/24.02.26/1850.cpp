#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long a, b;
	cin >> a >> b;

	long long g = gcd(a, b);

	string res = "";
	for (int i = 0; i < g; i++)
		res += '1';

	cout << res << '\n';

	return 0;
}