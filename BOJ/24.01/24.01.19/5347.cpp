#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
	if (a % b == 0)
		return b;
	else
		return gcd(b, a % b);

}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n--)
	{
		long long a, b;
		cin >> a >> b;
		long long res = a * b / gcd(a, b);

		cout << res << "\n";
	}

	return 0;
}