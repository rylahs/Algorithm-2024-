#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	unordered_set<string> ust;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		ust.insert(str);
	}

	int res = 0;
	while (m--)
	{
		string findStr;
		cin >> findStr;

		if (ust.find(findStr) != ust.end())
			res++;
	}

	cout << res << '\n';
	return 0;
}