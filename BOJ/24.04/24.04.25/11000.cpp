#include <bits/stdc++.h>
using namespace std;

struct Class
{
	int start, end;
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<Class> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i].start >> v[i].end;

	sort(v.begin(), v.end(), [](const Class& a, const Class& b) {
		return a.start < b.start;
	});

	priority_queue<int, vector<int>, greater<int>> pq;

	for (auto& e : v)
	{
		if (!pq.empty() && pq.top() <= e.start)
		{
			pq.pop();
		}

		pq.push(e.end);
	}

	cout << pq.size() << '\n';

}