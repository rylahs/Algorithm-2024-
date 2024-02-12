#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	vector<int> v(26, -1);

	for (int i = 0; i < str.length(); i++)
	{
		if (v[str[i] - 'a'] == -1)
			v[str[i] - 'a'] = i;
	}

	for (auto& e : v)
		cout << e << " ";





	return 0;
}