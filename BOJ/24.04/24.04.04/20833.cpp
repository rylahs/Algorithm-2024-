#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long res = 0;
	for (int i = 1; i <= n; i++)
		res += (i * i * i);
	
	cout << res << '\n';

	return 0;
}