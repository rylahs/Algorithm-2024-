#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	vector<int> alpha(26, 0);
	vector<char> ans(50, 0);

	int size = s.length();
	for (int i = 0; i < size; i++)
		alpha[s[i] - 'A']++;

	int cnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] % 2 == 1)
		{
			cnt++;
			ans[s.length() / 2] = i + 'A';
			alpha[i]--;
		}
	}


	if (cnt > 1)
	{
		cout << "I'm Sorry Hansoo\n";
		return 0;
	}

	int left = 0, right = s.length() - 1;

	for (int i = 0; i < 26; i++)
	{
		while (alpha[i] > 1)
		{
			ans[left++] = i + 'A';
			ans[right--] = i + 'A';
			alpha[i] -= 2;
		}
	}

	for (int i = 0; i < s.length(); i++)
		cout << ans[i];
	


	return 0;
}