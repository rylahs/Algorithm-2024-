#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	
	while (true)
	{
		string str;
		getline(cin, str);

		if (str == "#")
			return 0;

		int cnt = 0;

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;

			if (str[i] == 'a' || str[i] == 'e'
				|| str[i] == 'i' || str[i] == 'o'
				|| str[i] == 'u')
				cnt++;

			
		}

		cout << cnt << '\n';
	}
	return 0;
}