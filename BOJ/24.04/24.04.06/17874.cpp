#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, h, v;
	cin >> n >> h >> v;

	int wid = max(h, n - h);
	int hei = max(v, n - v);

	cout << wid * hei * 4 << '\n';

	return 0;
}