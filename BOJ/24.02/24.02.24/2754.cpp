#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string score;
	cin >> score;

	char alpha = score[0];

	double res = 0;

	switch (alpha)
	{
	case 'A':
		res = 4.0;
		break;
	case 'B':
		res = 3.0;
		break;
	case 'C':
		res = 2.0;
		break;
	case 'D':
		res = 1.0;
		break;
	case 'F':
		res = 0.0;
		break;
	default:
		break;
	}

	if (alpha != 'F')
	{
		char op = score[1];
		switch (op)
		{
		case '+':
			res += 0.3;
			break;
		case '-':
			res -= 0.3;
		}
	}
	cout << fixed;
	cout.precision(1);
	cout << res << "\n";
	return 0;
}