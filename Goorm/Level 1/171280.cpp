#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	
	int arr[10002][2] = {};
	for (int i = 0; i < n; i++)
	{
		int sub, score;
		cin >> sub >> score;

		arr[sub][0]++;
		arr[sub][1] += score;
	}

	double avg[10002] = {};
	int mxIdx = -1;
	double mxAvg = DBL_MIN;
	for (int i = 1; i <= m; i++)
	{
		avg[i] = (double)arr[i][1] / arr[i][0];
		if (mxAvg < avg[i])
		{
			mxAvg = avg[i];
			mxIdx = i;
		}
	}


	cout << mxIdx << '\n';
	
	return 0;
}