#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	

	string pattern;
	cin >> pattern;

	string patternA, patternB;
	int index = 0;
	for (int i = 0; i < pattern.length(); i++)
	{
		if (pattern[i] == '*')
		{
			index = i;
			break;
		}
	}
	patternA = pattern.substr(0, index);
	patternB = pattern.substr(index + 1, pattern.length());


	while (n--)
	{
		string str;
		cin >> str;

		bool isPattern = true;
		if (str.length() < patternA.length() + patternB.length()) 
		{
			isPattern = false; 
		}
		else 
		{
			for (int i = 0; i < patternA.length(); i++) 
			{
				if (str[i] != patternA[i]) 
				{
					isPattern = false;
					break;
				}
			}
			int patternBIdx = 0;
			for (int i = str.length() - patternB.length(); i < str.length(); i++) 
			{
				if (str[i] != patternB[patternBIdx++]) 
				{
					isPattern = false;
					break;
				}
			}
		}

		if (isPattern)
			cout << "DA\n";
		else
			cout << "NE\n";
	}

	return 0;
}