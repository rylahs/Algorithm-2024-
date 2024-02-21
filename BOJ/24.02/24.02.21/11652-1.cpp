#include <bits/stdc++.h>
using namespace std;

long long arr[100001];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	long long mxVal = LLONG_MIN;
	int cnt = 0;
	int mxCnt = 0;

	for (int i = 0; i < n; i++)
	{
		if (i == 0 || arr[i - 1] == arr[i])
			cnt++;
		else
		{
			if (cnt > mxCnt)
			{
				mxCnt = cnt;
				mxVal = arr[i - 1];
			}

			cnt = 1;
		}
	}

	if (cnt > mxCnt)
	{
		mxCnt = cnt;
		mxVal = arr[n - 1];
	}

	cout << mxVal << "\n";
	return 0;
}