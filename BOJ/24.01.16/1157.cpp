#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;
	vector<int> alpha(26, 0);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;

		alpha[str[i] - 'a']++;
	}

	int maxAlpha = INT32_MIN;
	char maxChar = '!';
	int reap = 0;
	for (int i = 0; i < alpha.size(); i++)
	{
		if (maxAlpha == alpha[i])
		{
			reap++;
			continue;
		}
		if (alpha[i] > maxAlpha)
		{
			maxAlpha = alpha[i];
			maxChar = i + 'A';
			reap = 1;
		}
	}

	if (reap != 1)
		cout << "?" << "\n";
	else
		cout << maxChar << "\n";
	return 0;
}