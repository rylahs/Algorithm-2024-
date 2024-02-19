#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	unordered_map<string, string> ump;

	while (n--)
	{
		string site, pw;
		cin >> site >> pw;
		ump.insert({ site, pw });
	}

	while (m--)
	{
		string site;
		cin >> site;
		
		auto it = ump.find(site);
		if (it != ump.end())
			cout << it->second << "\n";
	}

	return 0;
}