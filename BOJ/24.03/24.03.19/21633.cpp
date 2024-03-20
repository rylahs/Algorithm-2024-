#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	double res = 25 + n * 0.01;
	if (res < 100)
		res = 100;
	if (res > 2000)
		res = 2000;
	cout << fixed;
	cout.precision(2);

	cout << res << '\n';


	return 0;
}