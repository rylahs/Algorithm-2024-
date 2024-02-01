#include <bits/stdc++.h>

using namespace std;
int factorial(int n)
{
	if (n == 0)
		return 1;
	int res = 1;

	for (int i = n; i >= 1; i--)
		res *= i;

	return res;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	int result = factorial(n) / (factorial(k) * factorial(n - k));

	cout << result << "\n";
	
	return 0;
}