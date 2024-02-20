#include <bits/stdc++.h>
#include <unordered_map>
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

		int ans = 1;
		unordered_map<string, int> ump;
		if (n == 0)
			ans = 0;
		else
		{
			for (int i = 0; i < n; i++)
			{
				string name, type;
				cin >> name >> type;
				auto it = ump.find(type);
				if (it != ump.end())
				{
					it->second += 1;
				}
				else
				{
					ump.insert({ type, 1 });
				}

			}

			for (auto it = ump.begin(); it != ump.end(); ++it)
			{
				ans *= (it->second) + 1;
				
			}

			ans--;

		}
		cout << ans << '\n';
	}

	return 0;
}