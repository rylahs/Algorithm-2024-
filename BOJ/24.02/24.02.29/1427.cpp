#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v;

	while (n != 0)
	{
		v.push_back(n % 10);
		n /= 10;
	}

	sort(v.begin(), v.end(), greater<>());

	for (auto& e : v)
		cout << e;
	cout << "\n";


	return 0;
}