#include <bits/stdc++.h>
using namespace std;

#define MOD 1'000'000'000

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<long long> vN(n);
	for (int i = 0; i < n; i++)
		cin >> vN[i];

	int m;
	cin >> m;
	vector<long long> vM(m);
	for (int i = 0; i < m; i++)
		cin >> vM[i];

	long long ans = 1;
	bool isBig = false;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			long long tmp = gcd(vN[i], vM[j]);
			ans *= tmp;

			if (ans >= MOD)
			{
				isBig = true;
				ans %= MOD;
			}
			vN[i] /= tmp;
			vM[j] /= tmp;
		}
	}


	if (isBig)
	{
		cout << setfill('0') << setw(9) << ans << "\n";
	}
	else
		cout << ans << "\n";

	return 0;
}