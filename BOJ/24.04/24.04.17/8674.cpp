#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long a, b;
	cin >> a >> b;

	
	if (a % 2 && b % 2)
		cout << min(a, b) << '\n';
	else
		cout << 0 << '\n';

	return 0;
}