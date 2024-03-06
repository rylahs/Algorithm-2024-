#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int a, b;
	cin >> a >> b;

	int c, x;
	cin >> c >> x;

	
	if (a * x + b <= c * x && a <= c)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';

	return 0;
}