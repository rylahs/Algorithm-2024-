#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x;
	cin >> x;

	if (x % 7 == 2)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';

	return 0;
}