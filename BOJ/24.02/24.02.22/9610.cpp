#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int arr[5] = {};
	while (n--)
	{
		int x, y;
		cin >> x >> y;

		if (x == 0 || y == 0)
			arr[0]++;
		else if (x > 0 && y > 0)
			arr[1]++;
		else if (x < 0 && y > 0)
			arr[2]++;
		else if (x < 0 && y < 0)
			arr[3]++;
		else if (x > 0 && y < 0)
			arr[4]++;
	}

	for (int i = 1; i < 5; i++)
		cout << "Q" << i << ": " << arr[i] << "\n";
	cout << "AXIS: " << arr[0] << "\n";

	return 0;
}