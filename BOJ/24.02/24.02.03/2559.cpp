#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int sum = 0;
	for (int i = 0; i < k; i++)
		sum += arr[i];

	int maxValue = INT_MIN;
	for (int i = 0; i <= n - k; i++)
	{
		maxValue = max(sum, maxValue);

		sum += arr[i + k];
		sum -= arr[i];
	}

	cout << maxValue << "\n";

	return 0;
}