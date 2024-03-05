#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		cout << "Case #" << t << ": ";
		int n;
		cin >> n;
		if (n <= 25)
		{
			cout << "World Finals\n";
			continue;
		}
		if (n <= 1000)
		{
			cout << "Round 3\n";
			continue;
		}
		if (n <= 4500)
		{
			cout << "Round 2\n";
			continue;
		}
			cout << "Round 1\n";
	}

	return 0;
}