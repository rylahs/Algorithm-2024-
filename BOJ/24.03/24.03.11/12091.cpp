#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	string str[3] = { "Vaporeon", "Jolteon", "Flareon" };

	cout << str[++n % 3] << '\n';

	return 0;
}