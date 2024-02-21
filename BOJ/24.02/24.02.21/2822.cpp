#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 8;
	vector<pair<int, int>> v(n);
	vector<int> rank;
	for (int i = 0; i < n; i++)
	{
		int score;
		cin >> score;
		v[i].first = score;
		v[i].second = i + 1;
	}
	sort(v.begin(), v.end(), greater<>());

	int tot = 0;
	for (int i = 0; i < 5; i++)
	{
		tot += v[i].first;
		rank.push_back(v[i].second);
	}
	sort(rank.begin(), rank.end());

	cout << tot << "\n";
	for (auto& e : rank)
		cout << e << " ";
	cout << '\n';


	return 0;
}