#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> alpha(26, 0);

	while (n--)
	{
		string str;
		cin >> str;

		alpha[str[0] - 'a']++;
	}

	bool isGame = false;
	string res = "";
	for (int i = 0; i < alpha.size(); i++)
	{
		if (alpha[i] >= 5)
		{
			isGame = true;
			res += (i + 'a');
		}
	}

	if (isGame)
		cout << res << "\n";
	else
		cout << "PREDAJA\n";

	return 0;
}