#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	unordered_set<int> ust;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		ust.insert(input);
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;
		if (ust.find(num) != ust.end())
			cout << 1 << ' ';
		else
			cout << 0 << ' ';
	}

	return 0;
}