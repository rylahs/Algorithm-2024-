#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);

	int result = 0;
	while (q.size() != 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();	
	}

	result = q.front();

	cout << result << "\n";

	return 0;
}