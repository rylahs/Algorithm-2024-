#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	while (true)
	{
		cin >> a >> b;

		if (a == 0 && b == 0)
			break;

		int c = max((a - b) / 2 - (a - b) % 2, 0);	
		int d = a - b <= 1 ? 0 : (a - b) % 2;

		cout << c << ' ' << d << '\n';

	}

	return 0;
}