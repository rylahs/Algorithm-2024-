#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int p1, s1, s2, p2;
	cin >> p1 >> s1;
	cin >> s2 >> p2;

	int totP = p1 + p2;
	int totE = s1 + s2;

	if (totP > totE)
		cout << "Persepolis";
	else if (totE > totP)
		cout << "Esteghlal";
	else
	{
		if (p2 > s1)
			cout << "Persepolis";
		else if (s1 > p2)
			cout << "Esteghlal";
		else
			cout << "Penalty";
	}

	return 0;
}