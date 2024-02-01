#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long a, b;
	cin >> a >> b;

	if (a > b)
		swap(a, b);
	int cnt = 0;
	for (long long i = a + 1; i < b; i++)
		cnt++;

	cout << cnt << "\n";
	for (long long i = a + 1; i < b; i++)
		cout << i << " ";

	
	return 0;
}