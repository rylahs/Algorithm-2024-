#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	int lenA = a.length();
	int lenB = b.length();

	if (lenB > lenA)
	{
		swap(a, b);
		swap(lenA, lenB);
	}

	string tmp = "";
	if (lenA != lenB)
	{
		for (int i = 0; i < (lenA - lenB); i++)
			tmp += "0";
	}
	b = tmp + b;

	int carry = 0;
	int x, y, dig;

	string ans = "";
	for (int i = lenA - 1; i >= 0; i--)
	{
		x = a[i] - '0';
		y = b[i] - '0';
		dig = x + y;
		if (carry == 1)
		{
			dig++;
			carry = 0;
		}
		if (dig > 9)
			carry = 1;

		ans += dig % 10 + '0';
	}
	if (carry == 1)
		ans += "1";

	reverse(ans.begin(), ans.end());

	cout << ans << "\n";


	return 0;
}