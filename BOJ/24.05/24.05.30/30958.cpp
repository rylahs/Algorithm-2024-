#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	string str;

	cin >> n;
	getline(cin, str);
	getline(cin, str);


	unordered_map<char, int> cnt;
	for (char c : str)
	{
		if (isalpha(c))
			cnt[tolower(c)]++;
	}

	int max_cnt = 0;
	for (auto& [c, count] : cnt)
		max_cnt = max(max_cnt, count);

	cout << max_cnt << '\n';


	return 0;
}