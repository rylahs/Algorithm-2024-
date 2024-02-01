#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int input;
	cin >> input;

	vector<int> num(10, 0);

	while (input > 0)
	{
		num[input % 10]++;
		input /= 10;
	}

	int res = 0;
	int maxV = -1;
	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9)
			continue;

		maxV = max(num[i], maxV);
	}

	int countSixNine = (num[6] + num[9] + 1) / 2;
	maxV = max(countSixNine, maxV);

	cout << maxV << "\n";



	return 0;
}