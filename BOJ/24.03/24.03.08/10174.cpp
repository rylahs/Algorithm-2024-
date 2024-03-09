#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	cin.ignore();

	while (t--)
	{
		string s;
		getline(cin, s);

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] += 32;
		}


		int left = 0, right = (int)s.length() - 1;

		bool isPalindrome = true;
		while (left < right)
		{
			if (s[left] != s[right])
			{
				isPalindrome = false;
				break;
			}
			left++;
			right--;
		}

		if (isPalindrome)
			cout << "Yes\n";
		else
			cout << "No\n";

	}

	return 0;
}