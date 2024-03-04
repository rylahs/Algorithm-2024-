#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	map<string, int> mp;

	int cnt = 0;
	string str;
	while (getline(cin, str))
	{
		mp[str]++;
		cnt++;
	}

	cout << fixed;
	cout.precision(4);

	auto it = mp.begin();

	for (const auto& e : mp)
	{
		double rate = ((double)(e.second * 100) / cnt);
		cout << e.first << ' ' << rate << '\n';
	}

	return 0;
}