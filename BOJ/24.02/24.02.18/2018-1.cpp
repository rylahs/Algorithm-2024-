#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int res = 0, sum = 0;

	for (int i = 1; sum <= n; i++) 
	{
		sum += i;
		if ((n - sum) >= 0 && (n - sum) % i == 0) 
			res++;
	}

	cout << res << "\n";
	return 0;
}