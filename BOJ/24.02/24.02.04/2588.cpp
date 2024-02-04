#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int mA = a * (b % 10);
	int mB = a * (b / 10 % 10);
	int mC = a * (b / 100 % 10);

	cout << mA << "\n";
	cout << mB << "\n";
	cout << mC << "\n";

	int res = a * b;
	cout << res << "\n";

	return 0;
}