#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string txt[7] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday" };
	int m, d;
	cin >> d >> m;

	int tot = 0;
	for (int i = 0; i < m; i++)
		tot += month[i];

	tot += d;

	cout << txt[tot % 7] << "\n";


	return 0;
}