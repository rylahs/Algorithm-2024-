#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int minNum = INT_MAX;
	int maxNum = INT_MIN;

	while (n--)
	{
		int input;
		cin >> input;
		minNum = min(minNum, input);
		maxNum = max(maxNum, input);
	}

	cout << minNum << " " << maxNum << "\n";

	return 0;
}