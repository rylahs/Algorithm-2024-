#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	int stuNum[6][2] = { 0 };
	for (int t = 0; t < n; t++)
	{
		int gen, grade;
		cin >> gen >> grade;

		stuNum[grade - 1][gen]++;
	}
	int roomCnt = 0;
	
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (stuNum[i][j] == 0)
				continue;

			roomCnt += (stuNum[i][j] + (k - 1)) / k;
		}
	}
	cout << roomCnt << "\n";


	return 0;
}