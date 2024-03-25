#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v(3, 0);
	for (int i = 0; i < 3; i++)
		cin >> v[i];
	
	sort(v.begin(), v.end());

	int sub1 = v[1] - v[0];
	int sub2 = v[2] - v[1];

	if (sub1 == sub2)
		cout << v[2] + sub1 << '\n';
	else if (sub1 > sub2)
		cout << v[0] + sub2 << '\n';
	else
		cout << v[1] + sub1 << '\n';
	

	return 0;
}