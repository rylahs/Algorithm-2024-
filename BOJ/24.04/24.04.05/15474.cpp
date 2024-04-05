#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;

	int aCnt = 0, bCnt = 0;
	aCnt = n / a;
	if (n % a > 0)
		aCnt++;
	bCnt = n / c;
	if (n % c > 0)
		bCnt++;

	cout << min(aCnt * b, bCnt * d) << '\n';


	return 0;
}