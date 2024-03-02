#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	if (n == 0)
	{
		cout << 0 << '\n';
		return 0;
	}
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());
	int cut = (int)round(n * 0.15);

	int res = (int)round(accumulate(v.begin() + cut, v.end() - cut, 0) / (double)(n - (2 * cut)));

	cout << res << '\n';


	return 0;
}