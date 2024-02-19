#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, i;
	cin >> a >> i;

	
	if (i > 1)
		i--;
	int res = a * i + 1;
	cout << res << "\n";

	return 0;
}