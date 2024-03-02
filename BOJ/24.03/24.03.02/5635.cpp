#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b)
{
	return a.second > b.second;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<string, int>> v;
	for (int i = 0; i < n; i++)
	{
		string name;
		int d, m, y;
		cin >> name >> d >> m >> y;
		string tmp = "";
		tmp += to_string(y);

		if (m < 10)
			tmp += '0';
		tmp += to_string(m);
		if (d < 10)
			tmp += '0';
		tmp += to_string(d);
		int date = stoi(tmp);
		v.push_back({ name, date });
	}

	sort(v.begin(), v.end(), compare);

	cout << v[0].first << '\n';
	cout << v[n - 1].first << '\n';

	
	return 0;
}