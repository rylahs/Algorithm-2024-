#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int score;
		cin >> score;

		if (score < 40)
			score = 40;
		sum += score;
	}

	int avg = sum / 5;
	cout << avg << '\n';

	return 0;
}