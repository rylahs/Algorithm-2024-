#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<pair<int, string>> members;
	set<int> uniqueSteak;

	
	for (int i = 0; i < n; i++)
	{
		string rec, name;
		int mxSteak = 0, curSteak = 0;

		for (int j = 0; j < m; j++)
		{
			cin >> rec;

			if (rec == ".")
				curSteak++;
			else
			{
				mxSteak = max(mxSteak, curSteak);
				curSteak = 0;
			}

		}
		mxSteak = max(mxSteak, curSteak); 

		cin >> name;

		members.push_back({ mxSteak, name });
		uniqueSteak.insert(mxSteak);
	}

	cout << uniqueSteak.size() << '\n';

	for (auto& e : members)
		cout << e.first << ' ' << e.second << '\n';

	return 0;
}