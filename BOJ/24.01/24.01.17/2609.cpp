#include <bits/stdc++.h>
using namespace std;


int gcd_make(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd_make(b, a % b);
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int gcd = gcd_make(a, b);
	int lcm = a * b / gcd;

	cout << gcd << "\n" << lcm << "\n";

	return 0;
}