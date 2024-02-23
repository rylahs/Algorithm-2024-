#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long num;
	long long res = 0;
	cin >> num;

	for (long long i = 1; i < num; i++)
		res += (num + 1) * i;
	cout << res << "\n";

	return 0;
}