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
	vector<string> duplicate;

	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		ust.insert(input);
	}

	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;
		if (ust.find(input) != ust.end())
			duplicate.push_back(input);
	}



	cout << duplicate.size() << "\n";

	sort(duplicate.begin(), duplicate.end(), less<>());

	for (auto& e : duplicate)
		cout << e << "\n";

	return 0;
}