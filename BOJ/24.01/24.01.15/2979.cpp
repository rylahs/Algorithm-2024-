#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	vector<int> truck(101, 0);
	for (int i = 0; i < 3; i++)
	{
		int start, end;
		cin >> start >> end;

		for (int i = start; i < end; i++)
			truck[i]++;
	}
	int total_price = 0;
	for (auto& e : truck)
	{
		if (e == 0)
			continue;
		else if (e == 3)
			total_price += c * 3;
		else if (e == 2)
			total_price += b * 2;
		else if (e == 1)
			total_price += a;
	}

	cout << total_price << "\n";
	
	



	return 0;
}