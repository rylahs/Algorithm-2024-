#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x;
	cin >> x;

	int k = 1;
	while (true)
	{
		if ((k - 1) * k / 2 < x
			&& x <= k * (k + 1) / 2)
			break;
		k++;
	}

	int a = k * (k + 1) / 2;

	if (k % 2 == 0)
		cout << k - (a - x) << "/" << a - x + 1 << "\n";

	else
		cout << a - x + 1 << "/" << k - (a - x) << "\n";
	

	return 0;
}