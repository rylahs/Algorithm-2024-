#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	bool isSum = false;

	if (a + b == c || b + c == a || c + a == b)
		isSum = true;

	if (isSum)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';

	return 0;
}