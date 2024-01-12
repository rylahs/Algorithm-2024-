#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> alpha(26, 0);

	string input;
	cin >> input;

	for (auto& e : input)
		alpha[e - 'a']++;
	

	for (auto& e : alpha)
		cout << e << " ";
	cout << "\n";

	return 0;
}