#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int testCase;
	cin >> testCase;
	
	while (testCase--)
	{
		int n;
		cin >> n;

		vector<pair<int, string>> v(n);

		for (int i = 0; i < n; i++)
		{
			string str;
			int al;
			cin >> str >> al;
			v[i].first = al;
			v[i].second = str;
		}

		sort(v.begin(), v.end(), greater<>());

		cout << v[0].second << "\n";
	}

	return 0;
}