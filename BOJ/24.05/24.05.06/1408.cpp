#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string start, goal;
	cin >> start >> goal;

	int st_h, st_m, st_s;
	st_h = stoi(start.substr(0, 2));
	st_m = stoi(start.substr(3, 2));
	st_s = stoi(start.substr(6, 2));

	int g_h, g_m, g_s;
	g_h = stoi(goal.substr(0, 2));
	g_m = stoi(goal.substr(3, 2));
	g_s = stoi(goal.substr(6, 2));


	int res_h = 0, res_m = 0, res_s = 0;
	
	res_s = g_s - st_s;
	if (res_s < 0)
	{
		g_m--;
		res_s += 60;
	}

	res_m = g_m - st_m;
	if (res_m < 0)
	{
		g_h--;
		res_m += 60;
	}

	res_h = g_h - st_h;
	if (res_h < 0)
	{
		res_h += 24;
	}
	string tmp = "";
	if (res_h < 10)
		tmp += '0';
	tmp += to_string(res_h);
	tmp += ':';
	
	if (res_m < 10)
		tmp += '0';
	tmp += to_string(res_m);
	tmp += ':';
	
	if (res_s < 10)
		tmp += '0';
	tmp += to_string(res_s);
	
	cout << tmp << '\n';




	return 0;
}