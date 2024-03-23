#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	int ta = b * 2 + c * 4;
	int tb = a * 2 + c * 2;
	int tc = a * 4 + b * 2;

	cout << min({ ta, tb, tc }) << '\n';

	return 0;
}