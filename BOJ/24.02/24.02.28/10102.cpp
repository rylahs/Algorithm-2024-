#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int v;
	cin >> v;
	int arr[2] = {};
	for (int i = 0; i < v; i++)
	{
		char a;
		cin >> a;
		arr[a - 'A']++;
	}

	if (arr[0] > arr[1])
		cout << 'A' << '\n';
	else if (arr[0] < arr[1])
		cout << 'B' << '\n';
	else
		cout << "Tie\n";

	return 0;
}