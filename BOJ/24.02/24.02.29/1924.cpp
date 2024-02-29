#include <bits/stdc++.h>
using namespace std;

int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string date[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y;
	cin >> x >> y;

	int sum = 0;
	for (int i = 0; i < x; i++)
		sum += month[i];

	sum += y;
	int resDate = sum % 7;

	cout << date[resDate] << "\n";

	return 0;
}