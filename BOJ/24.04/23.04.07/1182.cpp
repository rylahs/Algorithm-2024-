#include <bits/stdc++.h>
using namespace std;

int n, s, cnt = 0;
int arr[20];

void backtrk(int idx, int sum)
{
	if (idx == n)
	{
		if (sum == s)
			cnt++;
		return;
	}

	backtrk(idx + 1, sum + arr[idx]);

	backtrk(idx + 1, sum);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> s;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	backtrk(0, 0);

	if (s == 0)
		cnt--;

	cout << cnt << '\n';

	return 0;
}