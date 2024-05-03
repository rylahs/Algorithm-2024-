#include <bits/stdc++.h>
using namespace std;

struct Part 
{
	int problem;
	int penalty;
};

bool compare(const Part& a, const Part& b)
{
	if (a.problem == b.problem)
		return a.penalty < b.penalty;
	return a.problem > b.problem;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<Part> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i].problem >> v[i].penalty;

	sort(v.begin(), v.end(), compare);

	int fifthSolved = v[4].problem;
	int fifthP = v[4].penalty;

	int cnt = 0;

	for (int i = 5; i < n; i++)
		if (v[i].problem == fifthSolved && v[i].penalty > fifthP)
			cnt++;


	cout << cnt << '\n';

	return 0;
}