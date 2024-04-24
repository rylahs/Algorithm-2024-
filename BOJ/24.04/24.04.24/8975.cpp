#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n;

	unordered_set<string> title;
	string word;

	for (int i = 0; i < n; i++)
	{
		cin >> word;
		title.insert(word);
	}

	cin >> m;
	
	int cnt = 0, guess = 0;
	for (int i = 1; i <= m; i++)
	{
		cin >> word;

		if (title.find(word) != title.end())
		{
			++guess;
			title.erase(word);
		}
		if (guess >= (n + 1) / 2)
		{
			cnt = i;
			break;
		}
	}


	cout << cnt << '\n';
	

	return 0;
}