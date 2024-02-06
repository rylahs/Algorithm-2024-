#include <bits/stdc++.h>

using namespace std;

vector<bool> state(10000005, true);
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	state[0] = false;
	state[1] = false;

	for (int i = 2; i < state.size(); i++)
	{
		if (state[i] == false)
			continue;
		for (int j = 2 * i; j < state.size(); j += i)
			state[j] = false;
	}
	int k;
	cin >> k;

	int cnt = 0;
	int idx = 0;
	for (int i = 2; i < state.size(); i++)
	{
		if (state[i])
			cnt++;

		if (cnt == k)
		{
			idx = i;
			break;
		}
	}

	cout << idx << "\n";
	return 0;
}