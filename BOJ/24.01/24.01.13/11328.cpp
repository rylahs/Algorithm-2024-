#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;


	while (testCase--)
	{
		string a, b;
		cin >> a >> b;

		int alpha[26] = { 0 };
		
		for (int i = 0; i < a.length(); i++)
			alpha[a[i] - 'a']++;
		
		for (int i = 0; i < b.length(); i++)
			alpha[b[i] - 'a']--;

		bool isPossible = true;
		
		for (auto& e : alpha)
		{
			if (e != 0)
			{
				isPossible = false;
				break;
			}
		}

		if (!isPossible)
			cout << "Impossible\n";
		else
			cout << "Possible\n";

	}

	return 0;
}
