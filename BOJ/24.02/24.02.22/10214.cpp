#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int score[2] = {};
		for (int i = 0; i < 9; i++)
		{
			int Y, K;
			cin >> Y >> K;
			score[0] += Y;
			score[1] += K;
		}

		if (score[0] > score[1])
			cout << "Yonsei\n";
		else if (score[0] < score[1])
			cout << "Korea\n";
		else
			cout << "Draw\n";
	}

	return 0;
}