#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long fact = 1;

	for (int i = 2; i <= n; i++)
		fact *= i;

	cout << fact << '\n';

	return 0;
}