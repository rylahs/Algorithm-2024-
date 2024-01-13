#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int alphaA[26] = { 0 };
	int alphaB[26] = { 0 };
	string a, b;
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++)
	{
		alphaA[a[i] - 'a']++;
	}

	for (int i = 0; i < b.length(); i++)
	{
		alphaB[b[i] - 'a']++;
	}

	int cnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alphaA[i] == alphaB[i])
			continue;
		cnt += abs(alphaA[i] - alphaB[i]);
	}

	cout << cnt << "\n";


	return 0;
}