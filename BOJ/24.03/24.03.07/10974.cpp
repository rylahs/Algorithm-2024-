#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		v[i] = i + 1;

	do
	{
		for (auto& e : v)
			cout << e << ' ';
		cout << '\n';
	} while (next_permutation(v.begin(), v.end()));



	return 0;
}