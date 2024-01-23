#include <bits/stdc++.h>
using namespace std;

void Solve()
{
	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int repeatNum;
		cin >> repeatNum;

		string str;
		cin >> str;

		string newStr;
		for (int i = 0; i < str.length(); i++)
		{
			for (int j = 0; j < repeatNum; j++)
			{
				newStr += str[i];
			}
		}

		cout << newStr << "\n";
	}

}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	Solve();

	return 0;
}