#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int t;
	if (b >= a)
		t = b - a;
	else
		t = (24 - a) + b;

	cout << t << '\n';

	return 0;
}