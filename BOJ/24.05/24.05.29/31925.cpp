#include <bits/stdc++.h>
using namespace std;


struct Member {
	string name;
	string status;
	string icpcAward;
	int shakeRank;
	int apcRank;
};

bool compareByName(const Member& a, const Member& b)
{
	return a.name < b.name;
}

bool compareByApcRank(const Member& a, const Member& b)
{
	return a.apcRank < b.apcRank;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<Member> v;

	for (int i = 0; i < n; i++)
	{
		Member m;
		cin >> m.name >> m.status >> m.icpcAward >> m.shakeRank >> m.apcRank;
		v.push_back(m);
	}

	vector<Member> q;

	for (auto& e : v)
	{
		if (e.status == "jaehak" && e.icpcAward == "notyet" && (e.shakeRank > 3 || e.shakeRank == -1))
			q.push_back(e);
	}

	sort(q.begin(), q.end(), compareByApcRank);

	if (q.size() > 10)
		q.resize(10);

	sort(q.begin(), q.end(), compareByName);

	cout << q.size() << '\n';
	for (auto& e : q)
		cout << e.name << '\n';

	return 0;
}