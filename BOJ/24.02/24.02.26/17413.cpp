#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(cin, str);

	auto cIdx = str.begin();
	auto sIdx = str.begin();

	while (cIdx != str.end())
	{
		if (*cIdx == '<')
		{
			reverse(sIdx, cIdx);
			while (*cIdx != '>')
				cIdx++;
			cIdx++;
			sIdx = cIdx;
			continue;
		}

		if (*cIdx != ' ')
		{
			cIdx++;
			continue;
		}

		if (*cIdx == ' ')
		{
			reverse(sIdx, cIdx);
			cIdx++;
			sIdx = cIdx;
		}
	}
	reverse(sIdx, cIdx);
	cout << str << "\n";
	return 0;
}