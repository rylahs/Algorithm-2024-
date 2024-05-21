#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	n--;

	char col = 'a' + (n % 8);
	int row = 1 + (n / 8);

	cout << col << row << '\n';

	return 0;
}