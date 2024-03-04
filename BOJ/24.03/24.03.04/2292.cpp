#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int a = 1;
	int cnt = 1;
	while (n > a)
	{
		a += 6 * cnt;
		cnt++;
	}
	cout << cnt << "\n";


	return 0;
}