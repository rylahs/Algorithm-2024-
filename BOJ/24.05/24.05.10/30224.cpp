#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;
	
	int n = stoi(str);
	bool isSvn = false;

	for (auto& e : str)
	{
		if (e == '7')
		{
			isSvn = true;
			break;
		}
	}

	if (n % 7 == 0 && isSvn)
	{
		cout << 3 << '\n';
		return 0;
	}

	if (n % 7 != 0 && isSvn)
	{
		cout << 2 << '\n';
		return 0;
	}

	if (n % 7 == 0 && !isSvn)
	{
		cout << 1 << '\n';
		return 0;
	}

	if (n % 7 != 0 && !isSvn)
	{
		cout << 0 << '\n';
	}
	
	return 0;
}