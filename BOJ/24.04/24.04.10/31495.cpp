#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(cin, str);

	if (str.length() < 3 || !(str.front() == '\"' && str.back() == '\"'))
	{
		cout << "CE\n";
		return 0;
	}

	for (int i = 1; i < str.length() - 1; i++)
		cout << str[i];


	return 0;
}