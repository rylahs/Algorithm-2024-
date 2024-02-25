#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;
		sum += pow(input, 2);

	}

	int res = sum % 10;

	cout << res << "\n";

	return 0;
}