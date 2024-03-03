#include <bits/stdc++.h>
using namespace std;


struct p {
	long double x, y;
	p operator + (const p& i) const {
		return { x + i.x, y + i.y };
	}
	p operator - (const p& i) const {
		return { x - i.x, y - i.y };
	}
	bool operator == (const p& i) const {
		return x == i.x && y == i.y;
	}
	bool operator < (const p& i) const {
		return x < i.x || x == i.x && y < i.y;
	}
};

istream& operator >> (istream& in, p& i) {
	in >> i.x >> i.y;
	return in;
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	p a, b, c, d;

	while (cin >> a >> b >> c >> d) 
	{
		p res;
		if (a == c) res = d + b - a;
		if (a == d) res = c + b - a;
		if (b == c) res = d + a - b;
		if (b == d) res = c + a - b;
		cout << fixed << setprecision(3) << res.x << ' ' << res.y << '\n';
	}
	return 0;
}