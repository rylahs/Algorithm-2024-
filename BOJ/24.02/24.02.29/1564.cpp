#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e12;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	
	
	int n;
	cin >> n;

	long long fact = 1;
	for (int i = 2; i <= n; i++)
	{
		fact = (i * fact);
		while (fact % 10 == 0)
			fact /= 10;
		fact %= MOD;
	}
	cout << fixed;
	cout.width(5);
	cout.fill('0');
	cout << fact % 100000 << '\n';

	return 0;
}