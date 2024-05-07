#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<string> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	string res = "";
	int tot = 0;

	for (int i = 0; i < m; i++)
	{
		vector<int> cnt(4, 0);

		for (int j = 0; j < n; j++)
		{
			char nuclo = v[j][i];
			if (nuclo == 'A') cnt[0]++;
			else if (nuclo == 'C') cnt[1]++;
			else if (nuclo == 'G') cnt[2]++;
			else if (nuclo == 'T') cnt[3]++;
		}

		int mxCnt = *max_element(cnt.begin(), cnt.end());
		tot += n - mxCnt;

		if (cnt[0] == mxCnt) res += 'A';
		else if (cnt[1] == mxCnt) res += 'C';
		else if (cnt[2] == mxCnt) res += 'G';
		else if (cnt[3] == mxCnt) res += 'T';
	}

	cout << res << '\n' << tot << '\n';


	return 0;
}