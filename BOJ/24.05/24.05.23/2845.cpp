#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int l, p;
	cin >> l >> p;

	int tot = l * p;

	for (int i = 0; i < 5; i++)
	{
		int news;
		cin >> news;
		cout << news - tot << ' ';
	}

	return 0;
}