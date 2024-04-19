#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int a, b;
	cin >> a >> b;

	set<int> sa;

	for (int i = 0; i < a; i++)
	{
		int input;
		cin >> input;
		sa.insert(input);
	}

	for (int i = 0; i < b; i++)
	{
		int findNum;
		cin >> findNum;

		if (sa.find(findNum) != sa.end())
			sa.erase(findNum);

	}

	if (sa.size() == 0)
		cout << 0 << '\n';
	else
	{
		cout << sa.size() << '\n';
		for (auto& e : sa)
			cout << e << ' ';
	}
	return 0;
}