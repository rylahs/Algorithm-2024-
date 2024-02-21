#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	unordered_map<long long, int> ump;

	for (int i = 0; i < n; i++)
	{
		long long input;
		cin >> input;

		if (ump.find(input) != ump.end())
		{
			ump[input]++;
			continue;
		}
		
		ump.insert({ input, 1 });
	}
	long long res = LLONG_MIN;
	int cnt = -1;
	for (auto it = ump.begin(); it != ump.end(); it++)
	{
		if (it->second > cnt)
		{
			res = it->first;
			cnt = it->second;
		}

		if (it->second == cnt && it->first < res)
			res = it->first;
	}

	cout << res << "\n";

	return 0;
}