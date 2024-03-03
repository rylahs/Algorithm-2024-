#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	

	int n;
	cin >> n;

	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
		a[i]--;
	}

	for (int i = 0; i < n; i++) 
	{
		cin >> b[i];
		b[i]--;
	}

	vector<int> c(n);
	for (int i = 0; i < n; i++) 
	{
		c[b[i]] = i;
	}
	for (int i = 0; i < n; i++) 
	{
		a[i] = c[a[i]];
	}

	int ncycle = 0;
	vector<bool> visited(n);
	for (int i = 0; i < n; i++) 
	{
		if (visited[i]) continue;
		int j = i;
		do 
		{
			visited[j] = true;
			j = a[j];
		} while (j != i);
		ncycle++;
	}
	cout << n - ncycle << "\n";

	return 0;
}
