#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c && c == a)
		cout << '*' << '\n';
	else
	{
		if (a == b)
			cout << 'C' << '\n';
		if (b == c)
			cout << 'A' << '\n';
		if (c == a)
			cout << 'B' << '\n';
	}

	return 0;
}