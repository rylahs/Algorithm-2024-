#include <bits/stdc++.h>
using namespace std;

bool compare(const tuple<int, int, string>& a, const tuple<int, int, string>& b)
{
	if (get<0>(a) != get<0>(b))
		return get<0>(a) < get<0>(b);
	return get<1>(a) < get<1>(b);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<tuple<int, int, string>> v;

	

	for (int i = 0; i < n; i++)
	{
		int age;
		string name;
		cin >> age >> name;
		v.push_back({ age, i, name });
	}

	sort(v.begin(), v.end(), compare);
	
	for (auto& e : v)
	{
		cout << get<0>(e) << " " << get<2>(e) << "\n";
	}

	return 0;
}