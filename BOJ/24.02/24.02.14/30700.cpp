#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string lookup = "KOREA";
	string input;
	cin >> input;

	int idx = 0;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == lookup[idx % 5])
			idx++;
	}

	cout << idx << "\n";

	return 0;
}