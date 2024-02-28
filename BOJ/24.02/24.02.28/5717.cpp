#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true)
	{
		int x, y;
		cin >> x >> y;

		if (x == 0 && y == 0)
			break;

		cout << x + y << "\n";
	}

	return 0;
}