#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	int left = 0;
	int right = str.length() - 1;

	bool isPalindrome = true;
	while (left <= right)
	{
		if (str[left] != str[right])
		{
			isPalindrome = false;
			break;
		}
		left++;
		right--;
	}

	if (!isPalindrome)
		cout << "false\n";
	else
		cout << "true\n";

	return 0;
}