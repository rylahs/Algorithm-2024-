#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int cw, ch, sw, sh;
	cin >> cw >> ch >> sw >> sh;

	if (cw - sw >= 2 && ch - sh >= 2)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';

	return 0;
}