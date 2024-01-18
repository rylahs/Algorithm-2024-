#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true)
	{
		string str;
		cin >> str;

		if (str == "0")
			return 0;

		string reverseStr;
		reverse_copy(str.begin(), str.end(), back_inserter(reverseStr));

		if (str == reverseStr)
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}