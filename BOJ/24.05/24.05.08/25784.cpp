#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	if (a + b == c || a + c == b || b + c == a)
		cout << 1 << '\n';
	else if (a * b == c || a * c == b || b * c == a)
		cout << 2 << '\n';
	else
		cout << 3 << '\n';

	return 0;
}