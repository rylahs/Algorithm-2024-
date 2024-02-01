#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	string str;
	cin >> str;

	int sum = 0;
	for (auto& e : str)
		sum += e - '0';

	cout << sum << "\n";
	

	return 0;
}