#include <bits/stdc++.h>
using namespace std;

long long factorial(long long n, long long m)
{
	long long res = 1;

	for (long long i = 1; i <= n; i++)
	{
		res = (res * i) % m;
		if (res == 0)
			break;
	}

	return res;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n, m;
	cin >> n >> m;

	if (n >= m)
		cout << "0\n";
	else
		cout << factorial(n, m) << '\n';


	return 0;
}