#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin >> n;

	int num = 1;
	int res = 0;
	long long sum = 0;

	while (true)
	{
		sum += num++;
		res++;

		if (sum > n)
		{
			res--;
			break;
		}

	}

	cout << res << "\n";

	return 0;
}