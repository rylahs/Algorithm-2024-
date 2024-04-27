#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int res = 0;

	for (int i = 0; i < s.length(); i++)
		res = (res * 10 + (s[i] - '0')) % 20000303;
	
	cout << res << '\n';

	return 0;
}