#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int cnt = 0;
	while (true)
	{
		int a, b;
		string st;
		cin >> a >> st >> b;
		if (st == "E")
			break;
		cnt++;
		bool res = true;
		if (st == ">")
			res = a > b ? true : false;
	
		else if (st == ">=")
			res = a >= b ? true : false;
		else if (st == "<")
			res = a < b ? true : false;
		else if (st == "<=")
			res = a <= b ? true : false;
		else if (st == "==")
			res = a == b ? true : false;
		else if (st == "!=")
			res = a != b ? true : false;

		cout << "Case " << cnt << ": " << (res ? "true\n" : "false\n");
	}


	return 0;
}
