#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;
	
	cout << a + b - c << '\n';
	string tmp = "";
	tmp += to_string(a);
	tmp += to_string(b);
	int tmpNum = stoi(tmp);
	cout << tmpNum - c << '\n';


	return 0;
}