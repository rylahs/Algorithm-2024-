#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, k;
	cin >> m >> k;

	if (m % k == 0)
		cout << "Yes\n";
	else
		cout << "No\n";

	return 0;
}