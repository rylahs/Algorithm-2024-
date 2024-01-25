#include <bits/stdc++.h>
using namespace std;

long long recur_pow(long long a, long long b, long long c)
{
	if (b == 1)
		return a % c;
	long long res = recur_pow(a, b / 2, c);
	res = res * res % c;
	if (b % 2 == 0)
		return res;
	return res * a % c;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long a, b, c;
	cin >> a >> b >> c;
	
	long long result = recur_pow(a, b, c);

	cout << result << "\n";

	return 0;
}