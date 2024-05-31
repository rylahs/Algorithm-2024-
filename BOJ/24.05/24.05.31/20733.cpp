#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(cin, str);

	int n = str.length();

	vector<string> v(3);
	v[0] = str.substr(0, n / 3);
	v[1] = str.substr(n / 3, n / 3);
	v[2] = str.substr(2 *n / 3, n / 3);


	sort(v.begin(), v.end());

	cout << v[1] << '\n';

	return 0;
}