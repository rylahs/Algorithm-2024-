#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	vector<int> v(testCase);
	while (testCase--)
	{
		int a, b;
		char op;
		cin >> a >> op >> b;
		int res = 0;
		switch (op)
		{
		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/':
			res = a / b;
		default:
			break;
		}

		v.push_back(res);
	}

	int sum = accumulate(v.begin(), v.end(), 0);
	cout << sum << '\n';

	return 0;
}