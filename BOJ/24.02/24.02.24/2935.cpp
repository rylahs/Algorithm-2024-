#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string a, b;
	char op;

	cin >> a >> op >> b;
	
	if (a.length() < b.length())
		swap(a, b);
	
	string res = a;
	switch (op)
	{
	case '+':
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		for (int i = 0; i < b.length(); i++)
			a[i] = a[i] + (b[i] - '0');
		reverse(a.begin(), a.end());
		res = a;
		break;
	case '*':
		
		for (int i = 1; i < b.length(); i++)
		{
			res += b[i];
		}
		break;
	}
	
	
	cout << res << "\n";


	return 0;
}