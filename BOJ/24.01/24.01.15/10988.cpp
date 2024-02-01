#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	string revStr;
	reverse_copy(str.begin(), str.end(), back_inserter(revStr));

	bool isPalindrome = false;

	if (str == revStr)
		isPalindrome = true;
	else
		isPalindrome = false;

	if (isPalindrome)
		cout << 1 << "\n";
	else
		cout << 0 << "\n";




	return 0;
}