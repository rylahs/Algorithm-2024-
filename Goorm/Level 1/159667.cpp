#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<string, double>& a, const pair<string, double>& b)
{
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}


int main(void) 
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector<pair<string, double>> v;
	for (int i = 0; i < n; i++)
	{
		string name;
		double height;
		cin >> name >> height;

		v.push_back(make_pair(name, height));
	}

	sort(v.begin(), v.end(), compare);

	cout << fixed;
	cout.precision(2);

	cout << v[k - 1].first << " " << v[k - 1].second << "\n";


	return 0;
}